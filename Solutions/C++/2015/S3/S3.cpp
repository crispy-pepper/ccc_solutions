#include <bits/stdc++.h>
using namespace std;
int t(int r, bool arr[]){
    for (r; r >= 1; r--) if (!arr[r]) return r;
    return 0;
}
int main(){
    int ng, p, c = 0; cin >> ng >> p; 
    deque<int> v(p);bool g[ng+1] = {0};
    for (int i = 0; i < p; i++) cin >> v[i];
    for (int i = 0; i < p; i++){
        g[t(v[0],g)] = 1;
        if (g[0] != 1)
            c++;
        else
            break;
        g[0] = 0;
        v.pop_front();
    }
    cout << c << endl;
}