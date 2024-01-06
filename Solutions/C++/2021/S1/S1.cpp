#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    double a = 0.0;
    int hs[n+1];

    for (int i = 0; i < n + 1; i++)
        cin >> hs[i];
    
    for (int i = 0; i < n; i++){
        int b = hs[i], c = hs[i+1], y; cin >> y;
        a +=  (min(b,c) + (abs(c-b)/2.0))*y;
    }
    
    cout << fixed << a << endl;

}