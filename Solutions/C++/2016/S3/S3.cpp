#include <bits/stdc++.h>
using namespace std;
struct graph {
    int v;
    deque<int>* arr;
    
    graph(int v);
    void addedge(int a, int b);

};

graph::graph(int v){
    this->v = v;
    arr = new deque<int>[v]; 
}
void graph::addedge(int a, int b){
    arr[a].push_back(b);
}




int main(){

    graph g(8), x(5);
    cout << g.v << x.v << endl;
    
}

