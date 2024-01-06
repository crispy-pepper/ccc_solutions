//This does not catch improper inputs so it will crash if so

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s; cin >> s;
    int c = count(s.begin(), s.end(), 'L'), m = count(s.begin(), s.end(), 'M'), xl = 0, ml = 0, lm = 0,xm = 0;

    for (int i = 0; i < c; i++) {
        xl += (s[i] != 'L');
        ml += (s[i] == 'M');
    }

    for (int i = c; i < c + m; i++) {
        xm += (s[i] != 'M');
        lm += (s[i] == 'L');
     }

    cout << xl + xm - min(ml, lm) << endl;

}