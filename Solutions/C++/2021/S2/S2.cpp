#include <bits/stdc++.h>
using namespace std;

char nnot(char c){
    if (c == 'G'){
        return 'B';
    }

    else{
        return 'G';
    }
}

int nrow(int n, vector<vector<char>>&v, int p){
    for (int i = 0; i < n; i++){
        v[p][i] = nnot(v[p][i]);
    }
}

void ncol(int n, vector<vector<char>>&v, int p){
    for (int i = 0; i < n; i++){
        v[i][p] = nnot(v[i][p]);
    }
}

int printv(vector<vector<char>>v, int n, int m){
    int s = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            s += (v[i][j]=='G');
        }
    }

    return s;
}

int main(){
    int n, m, e; cin >> n >> m >> e;
    bool row[n+1] = {0}, col[m+1] = {0};
    vector<vector<char>> b(n,vector<char>(m,'B'));

    for (int i = 0; i < e; i++){
        char c; int t; cin >> c >> t;
        if (c == 'R'){
            row[t] = !row[t];
        }
        else{
            col[t] = !col[t];
        }
    }

    for (int i = 1; i <= n; i++){
        if (row[i]){
            nrow(n,b,i-1);
        }
    }

    for (int i = 1; i <= m; i++){
        if (col[i]){
            ncol(m,b,i-1);
        }
    }

    cout << printv(b,n,m) << endl;
}