#include <bits/stdc++.h>
using namespace std;

int main(){
    int ds; cin >> ds;
    string g, s;
    char c;
    unordered_map<string,char> m;
    for (int i = 0; i < ds; i++){
        cin >> c >> g;
        m[g] = c;
    }
    cin >> s;
    
    string k = "", n = "";
    for (int i = 0; i < s.size(); i){
        int l = 1;
        while (true){
            k = s.substr(i, l);
            if (m.find(k) != m.end()){
                n +=  m[k];
                break;
            } else{
                l++;
            }
        }

        i += l;
    }

    cout << n << endl;
}

/*
5
A 00
B 01
C 10
D 110
E 111
00000101111
*/