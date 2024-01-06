#include <bits/stdc++.h>
using namespace std;

class graph{
    private:
        int v;
        vector<vector<int>> gr;

    public:

        graph(int V){
            v = V;
            gr.resize(v,{});
        }
            
        void addEdge(int v1, int v2){
            gr[v1].push_back(v2);
            
            //cout << "adding " << v2 << " to " << v1 << endl;
        }

        bool isPath(int s, int e){
            vector<bool> visited(v);
            vector<int> q;

            visited[s] = true;
            q.push_back(s);

            while (!q.empty()){
                s = q[0];
                q.erase(q.begin());
                //cout << "Checking vertex: " << s << endl;
                /*if (s == e){
                    return true;
                }*/
                for (int p:gr[s]){
                    if (p == e){
                        return true;
                    }
                    if (!visited[p]){
                        visited[p] = true;
                        //cout << "visit and add: " << p << endl;
                        q.push_back(p);
                    }
                    
                }
            }

            return false;

        }

        
};



int main(){
    int n,c; cin >> n >> c;
    graph g(n+1);
    for (int i =0;i < c;i++){
        int x, y;
        cin >> x >> y;
        g.addEdge(x,y);
    }
    int s,e;
    cin >> s >> e;
    //string str[2] = {"unknown","yes"};
    bool taller=g.isPath(s,e),shorter=g.isPath(e,s);
    if (!(taller||shorter)){
        cout << "unknown" << endl;
    }
    else if (taller){
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
    //cout << str[g.isPath(s,e) && g.isPath(e,s)] << endl;

}