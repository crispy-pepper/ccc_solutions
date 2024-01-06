#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n ==1) return false;
    for (int i = 2; i < sqrt(n)+1;i++){
        if (!(n%i)) return false;
    }
    return true;
}

int main(){
    int ddfhsu; cin >>ddfhsu;
    for (int ssifs = 0; ssifs<ddfhsu;ssifs++){
        int n; cin >> n;
        for (int m = 2; m < n;m++){
            if (isPrime(m)&& isPrime((2*n)-m)){
                cout <<m << " " << (2*n)-m << endl;
                break;
            }
        }
    }
}