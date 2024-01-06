#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x= 0; cin >> n;
    vector<char> g;
    for (int i = 0; i < n; i++){
        char a;
        cin >> a;
        g.push_back(a);
    }
    for (int i = 0; i < n; i++){
        char b;
        cin >> b;
        x += (b == g[i]);

    }
    cout << x << endl;
}