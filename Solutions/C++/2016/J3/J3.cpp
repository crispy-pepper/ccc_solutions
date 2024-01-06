#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int pal(){
    string i, sub, sub1;
    cin >> i;
    for (int len = i.size(); len >= 1; len-- ){
        for (int start = 0; start < i.size(); start++){
            sub = sub1 = i.substr(start, len); 
            reverse(sub.begin(), sub.end());
            if (len + start > i.size()) break;
            if (sub == sub1) return len;
            
        }
    }
    return 0;
}
int main(){
    cout << pal() << endl;
}