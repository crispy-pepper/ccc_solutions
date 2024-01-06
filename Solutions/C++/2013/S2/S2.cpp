#include <bits/stdc++.h>
using namespace std;

int main(){
    int maxW,n; cin >> maxW >> n;
    int weights[4] = {0,0,0,0};
    bool flag = true;
    int c = 0;

    for (int i = 0; i < n;i++){
        int w; cin >> w;
        weights[3] = weights[2];
        weights[2] = weights[1];
        weights[1] = weights[0];
        weights[0] = w;
        if (accumulate(weights,weights+4,0)>maxW){
            flag = false;
        }
        else if (flag){
            c++;
        }
    }

    cout << c << endl;
}