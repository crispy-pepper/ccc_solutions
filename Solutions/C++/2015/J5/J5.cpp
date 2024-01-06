#include <iostream>
using namespace std;

double fact(double n){
    double c = 1;
    for (int i = 2; i <= n; i++){
        c *= i;
    }

    return c;
}

int main(){
    double n, r;
    cin >> n >> r;
    cout << ((fact(n+r-1))/(fact(n)*fact(r-1)))/((n+r-1)*(r-1)) << endl;

}