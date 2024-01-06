#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, l = "IOSHZXN", a = "YES";
    cin >> s;

    for (char c:s){
        if (l.find(c) == string::npos){
            a = "NO";
            break;
        }
    }

    cout << a << endl;
}