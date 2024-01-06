#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t, c = 0, n, j, min; cin >> t  >> n;
    int l[n];

    for (int i = 0; i < n; i++){
        cin >> j;
        l[i] = j;
    }


    while (true){
        sort(l, l+n);
        if (t < l[0]) break;
        t -= l[0];
        l[0] = 101;
        c++;
    }

    cout << c << endl;

}