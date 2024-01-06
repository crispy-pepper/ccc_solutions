#include <bits/stdc++.h>
using namespace std;

int recur(int n, int branches, int layer, int &s){
    if (n/branches > 2){
        for (int i = 2; i <= n/branches; i++){
            recur(n,i,layer+1,s);
            return 0;
        }
        
    }
    else{
        s++;
        layer = 1;
        cout << layer << " " << branches << endl;
    }
    return s;
}

int main(){
    int n, s= 0, layer = 1; cin >> n;

    for (int branches = 2; branches <= n; branches++){
        cout << recur(n,branches,1,s) << endl << endl;
    }

    cout << s << endl;
}