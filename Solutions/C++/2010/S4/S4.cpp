#include<bits/stdc++.h>
using namespace std;

struct EdgeAttr{
    int pen1, pen2, weight;
};

std::unordered_map<string, EdgeAttr> edges;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int M;
    cin >> M;

    //parsing inputs
    for(int i = 0; i < M;i++){
        int E;
        cin >> E;//number of edges of pen #i
        int corners[E], weights[E];
        for(int j = 0; j < E;j++)
            cin >> corners[j];//corners of pen
        for(int j = 0; j < E;j++)
            cin >> weights[j];//weights of edges
        for(int j = 0; j < E;j++)
        {
            int corner[] = {corners[j], corners[(j+1)%E]};
            sort(corner,corner + 2);
            string key = to_string(corner[0]) + "-" + to_string(corner[1]);
            if(edges.find(key) == edges.end())
            {
                edges[key].pen1 = i;
                edges[key].pen2 = M;    
            }
            else
                edges[key].pen2 = i;
            edges[key].weight = weights[j];
        }
    }

    //create a 2D vector of size (M+1) x (M+1) with all elements initialized as 0
    vector<vector<int>> graph(M+1 , vector<int>(M+1, 0));
    
    for (auto const &edge: edges)
    {
        //if(edge.second.pen2 != M)
        //{//this is an edge between two pens
            if(graph[edge.second.pen1][edge.second.pen2] == 0)
            {
                graph[edge.second.pen1][edge.second.pen2] = edge.second.weight;
                graph[edge.second.pen2][edge.second.pen1] = edge.second.weight;
            }                
            else
            {
                graph[edge.second.pen1][edge.second.pen2] = min(edge.second.weight, graph[edge.second.pen1][edge.second.pen2]);
                graph[edge.second.pen2][edge.second.pen1] = min(edge.second.weight, graph[edge.second.pen2][edge.second.pen1]);
            }
        //}
        /*else
        {//this is an edge between pen and outside
            if(graph[edge.second.pen1][M] == 0)
            {
                graph[edge.second.pen1][M] = edge.second.weight;
                graph[M][edge.second.pen1] = edge.second.weight;
            }                
            else
            {
                graph[edge.second.pen1][M] = min(edge.second.weight, graph[edge.second.pen1][M]);
                graph[M][edge.second.pen1] = min(edge.second.weight, graph[M][edge.second.pen1]);
            }                
        }*/
    }

    return 0;
}