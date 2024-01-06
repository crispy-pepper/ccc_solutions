#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, str2, a = "no";
    cin >> str >> str2;
    for (int i = 0; i < str.size(); i++){
        str2 = str2.substr(1, str2.size()-1) + str2[0];

        if (str.find(str2) != string::npos){
            a = "yes";
            break;
        }
    }
    cout << a << endl;
}