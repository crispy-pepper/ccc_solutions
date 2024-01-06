#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x, y, x1, y1, g, s;
    cin >> x >> y >> x1 >> y1 >> g;
    
    s = abs(x-x1) + abs(y-y1);
    if (s > g || s%2 != g%2) cout << 'N';
    else cout << 'Y';

}