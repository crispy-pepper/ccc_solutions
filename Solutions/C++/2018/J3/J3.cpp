#include <iostream>
using namespace std;

int main(){
    int c[4], t, b, s;
    cin >> c[0] >> c[1] >> c[2] >> c[3];

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            s = 0;
            if (i < j){b = i; t = j;}
            else {b = j; t = i;}
            
            for (int k = b; k < t; k++)
                s += c[k];  
            
            cout << s << ' ';
        }
        cout << endl;
    }
}