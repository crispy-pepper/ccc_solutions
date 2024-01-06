#include <iostream>
using namespace std;

int main(){
    int N, A = 100, D = 100, a, d;
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> a >> d;
        if (a > d) D -= a;
        else if (d > a) A -= d;
    }

    cout << A << endl << D << endl; 
}