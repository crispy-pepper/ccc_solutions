#include <iostream>
using namespace std;

int main(){
    int n, s, su = 0;
    cin >> n >> s;

    for (int i = 0; i < s+1; i++){
        su += n;
        n *= 10;
    }

    cout << su;
}