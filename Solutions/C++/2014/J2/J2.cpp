#include <iostream>
#include <algorithm>
using namespace std;

int  main(){
    string comp;
    int a = 0, b = 0, o;

    cin >> o >> comp;

    a = count(comp.begin(),comp.end(),'A');
    b = count(comp.begin(),comp.end(),'B');

    if (a > b) cout << 'A' << endl;
    else if (a < b) cout << 'B' << endl;
    else cout << "Tie" << endl;
}