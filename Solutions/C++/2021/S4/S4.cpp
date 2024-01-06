#include <bits/stdc++.h>
using namespace std;


void swap(vector<int> &vect, int a, int b){
    int tmp = vect[a];
    vect[a] = vect[b];
    vect[b] = tmp;
}

void print(vector<int> vect){
    for (int l:vect){
        cout << l << " ";
    }
    cout << endl;
}

vector<int> sub(vector<int> vect, int pos){
    vector<int> n;
    for (int i = 0; i <= pos; i++){
        n.push_back(vect[i]);
    }
    return n;
}

int main(){
    int n, w, d; cin >> n >> w >> d;

    vector<pair<int,int>> can_go;
    for (int i = 0; i < w; i++){
        int a, b;
        cin >> a >> b;

        can_go.push_back(make_pair(a-1,b-1));
    }

    vector<int> order;
    for (int i = 0; i < n; i++){
        int s;
        cin >> s;
        order.push_back(s-1);
    }

    int swaps[d][2];
    for (int i = 0; i < d; i++){
        int x, y;
        cin >> x, y;
        swaps[i][0] = x-1;
        swaps[i][1] = y-1;
    }

    for (int bgfdbvfdfvd = 0; bgfdbvfdfvd < d; bgfdbvfdfvd++){
        swap(order, swaps[bgfdbvfdfvd][0], swaps[bgfdbvfdfvd][1]);

        print(order);
        int location = *find(order.begin(),order.end(),n-1);

        vector<int> n_order = sub(order, location);
        //print(n_order);
    }
}