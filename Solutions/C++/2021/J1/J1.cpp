//This does not catch improper inputs so it will crash if so

#include <iostream>
using namespace std;

int main(){
    int b;

    cin >> b;
    int p = b*5-400;
    
    cout << p << endl;
    if (p < 100) cout << 1 << endl;
    else if (p > 100) cout << -1 << endl;
    else cout << 0 << endl;
}