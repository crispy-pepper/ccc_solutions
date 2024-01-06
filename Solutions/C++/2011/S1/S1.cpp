#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s = 0, t = 0; cin >> n;
    for (int i = 0; i <= n; i++){
        string x; 
        getline(cin,x);
        s += count(x.begin(),x.end(),'s');
        t += count(x.begin(),x.end(),'t');
        s += count(x.begin(),x.end(),'S');
        t += count(x.begin(),x.end(),'T');
    }

    if (s >= t){
        cout << "French" << endl;
    }
    else{
        cout << "English" << endl;
    }
}