#include <iostream>
using namespace std;

int main(){
    int w = 0, l = 0, o;
    char g;
    for (int i = 0; i < 6; i++){
        cin >> g;
        w += (g == 'W');
        l += (g == 'L');
    }

    if (w == 5 || w == 6) o = 1;
    else if (w == 3 || w == 4) o = 2;
    else if (w == 1 || w == 2) o = 3;
    else o = -1;
    cout << o << endl;
}