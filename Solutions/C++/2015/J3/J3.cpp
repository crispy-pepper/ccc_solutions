#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int close(int n) {
    int l = 27, no, v[5] = {0, 4, 8, 14, 20};
    for (int num:v){
        if (abs(num-n) < l){ 
            l = abs(num-n);
            no = num;
        }
    }
    return no;
}
int main(){
    string w, a = "abcdefghijklmnopqrstuvwxyz", con = "bcdfghjklmnpqrstvwxyzz", vow = "aeiou";

    cin >> w;
    for (char u:w){
        cout << u;
        if (vow.find(u) == string::npos) cout << a[close(a.find(u))] << con[con.find(u)+1];
        
    }
}