#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string l1[n], l2[n];
    string op = "good";
    unordered_map<string,string> pairs;

    for (int i =0; i < n; i++){
        cin >> l1[i];
    }

    for (int i = 0; i < n; i++){
        cin >> l2[i];
        if (l2[i] == l1[i]){
            op = "bad";
            break;
        }

        else{
            pairs[l1[i]] = l2[i];
        }
    }

    for (int i =0; i < n; i++){
        if (pairs[l1[i]]!=l2[i] || pairs[l2[i]]!=l1[i]){
            op = "bad";
            break;
        }
    }


    cout << op << endl;
}