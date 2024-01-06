#include <bits/stdc++.h>
using namespace std;

#define INF INT_MAX

class graph{
    private:
        int v;
        vector<vector<vector<int>>> adj;
    public:
        graph(int V){
            v = V;
            adj.resize(v,{});
        }

        void addEdge(int a, int b, int t, int w){
            adj[a].push_back({b,w,t});
        }
    vector<pair<int,int>> dj(int s){
        vector<bool> visited(v,false);
        vector<pair<int,int>> dist(v,make_pair(INF, INF));
        queue<int> q;

        visited[s] = true;
        dist[s] = make_pair(0,s);
        q.push(s);
        while (!q.empty()){
            s = q.front();
            visited[s] = true;
            q.pop();
            for (pair<int,int> p:adj[s]){
                if (!visited[p.first]){
                    q.push(p.first);
                    if (dist[p.first].first > dist[s].first+p.second){
                        dist[p.first] = make_pair(dist[s].first+p.second,s);
                    }
                }
            }
        }
        return dist;
    }

};

int main(){
    int n,ed,h; cin >> h >> n >>ed;
    graph islands(n);
    for (int i = 0; i < ed; i++){
        int a1,b1,t1,h1; cin >> a1>>b1>>t1>>h1;
        islands.addEdge(a1,b1,t1,h1);
    }
    
}