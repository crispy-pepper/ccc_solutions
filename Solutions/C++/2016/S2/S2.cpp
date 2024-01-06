#include <bits/stdc++.h>
using namespace std;

int main(){
    int q, n, s = 0; cin >> q >> n;

    deque<int>d(n), p(n);
    for(int i = 0; i < n; i++){
        cin >> d[i];
    }
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }

    if (q == 1){
        sort(d.begin(),d.end());
        sort(p.begin(),p.end());
    }

    else{
        sort(d.begin(),d.end());
        sort(p.begin(),p.end(),greater<int>());
    }

    for (int i = 0; i < n; i++){
        s += max(d[i],p[i]);
    }

    cout << s << endl;
}