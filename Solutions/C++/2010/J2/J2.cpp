#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c, d, s, by, n;

    cin >> a >> b >> c >> d >> s;
    if (s/(a+b)>=1){
        n = ((s/(a+b))*(a-b))+(s-(s/(a+b))*(a+b));
        by = ((s/ (c+d)) * (c-d))  +  (s - (s/ (c+d)) * (c+d));
    }
    else {
        n = a;
        by = c;
    }
    if (by > n) cout << "Byron"<< endl;
    else if (n > by) cout << "Nikky"<< endl;
    else cout << "Tied" << endl;
    //cout << by << ' ' << n << endl;
}