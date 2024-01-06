#include <iostream>
using namespace std;

int main(){
    string day;
    int h = 0, s = 0;
    getline(cin,day);
    for (int i = 0; i < day.size();i++){
        if (day[i] == ':' && day[i+1] == '-'){
            s += (day[i+2] == '(');
            h += (day[i+2] == ')');
        }
    }

    if (h == 0 && s == 0) cout << "none" << endl;
    else if (h > s) cout << "happy" << endl;
    else if (h < s) cout << "sad" << endl;
    else cout << "unsure" << endl;
}