#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int sum = 0, r, c, d, k1;
    unordered_map<int,int> R, C;
    char k0;
    cin >> r >> c >> d;
    bool grid[r][c];

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            grid[i][j] = false;
        }
    }

    for (int i = 0; i < d; i++){
        cin >> k0 >> k1;
        if (k0 == 'R'){
            if (R.find(k1-1) == R.end())
                R[k1-1] = 0;
            

            R[k1-1] += 1;
        }
        else {
            if (C.find(k1-1) == C.end())
                C[k1-1] = 0;
            

            C[k1-1] += 1;
        }
    }

    for (auto it:R) {
        if (it.second%2)
            for (int x = 0; x < c; x++)
                grid[it.first][x] = !grid[it.first][x];    
                
    }
    for (auto it:C) {
        if (it.second%2)
            for (int x = 0; x < r; x++)
                grid[x][it.first] = !grid[x][it.first];   
            
    }       
    

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
            sum += (grid[i][j]);
        
    }

    cout << sum << endl;
}