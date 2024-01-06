#include <iostream>
#include <numeric>
using namespace std;

bool m(){
    int arr[4][4], sh = 0, su = 0, su2 = 0;

            
    for (int j= 0; j < 4; j++){
        for (int i = 0; i < 4; i++){
            cin >> arr[j][i];
        }
    }

    for (int j= 0; j < 4; j++){
        su = su2 = 0;
        for (int i = 0; i < 4; i++){
            su2 += arr[i][j];
            su += arr[j][i];
        }
        
        if (j == 0){
            sh = su;
        }
        if (su != sh || su2 != sh) return false;
        
    }

    
    return true;
}

int main(){
    if (m()) cout << "magic" << endl;
    else cout << "not magic" << endl;
}