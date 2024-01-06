#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;

    int ws = 0, as = 0, day = 0;
    vector<int> w(n), a(n);

    for (int i = 0; i < n; i++){
        cin >> w[i];
    }
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n; i++){
        ws += w[i]; as += a[i];

        if (as == ws) day = i+1;
    }

    cout << day << endl;
}