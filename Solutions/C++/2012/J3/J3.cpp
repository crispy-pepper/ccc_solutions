#include <iostream>
#include <string>
using namespace std;


int main(){
    int r; cin >> r;
    char g[3][3] = {{'*','x','*'}, {' ','x','x'}, {'*',' ','*'}};

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < r; j++)
            cout << string(r,g[i][0]) << string(r,g[i][1]) << string(r,g[i][2]) << endl;
}