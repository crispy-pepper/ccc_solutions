#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;

vector<vector<int>> get_ver(vector<vector<int>>hor, int n){
    vector<vector<int>> ver;
    for (int x = 0; x < n; x++){
        ver.push_back({});
        for (int y = 0; y < n; y++){
            ver[x].push_back(hor[y][x]);
        }
    }
    return ver;
}

vector<vector<int>> rotate(vector<vector<int>> hor, vector<vector<int>> ver){
    vector<vector<int>> n_hor;
    for (vector<int> row:ver){
        reverse(row.begin(),row.end());
        n_hor.push_back(row);
    }
    return n_hor;
}

bool check(vector<vector<int>> hor, vector<vector<int>> ver){
    for (vector<int> x:hor){
        vector<int> y = x;
        sort(y.begin(),y.end());
        if (y != x) return false;
    }

    for (vector<int> x:ver){
        vector<int> y = x;
        sort(y.begin(),y.end());
        if (y != x) return false;
    }
    return true;
}

void print(vector<vector<int>> vect){
    for (int x = 0; x < vect.size(); x++){
        for (int y = 0; y < vect.size(); y++){
            cout << vect[x][y] << " ";
        }
        cout << endl;
    }
}
int main(){
    vector<vector<int>> flo;
    int n, f;
    cin >> n;
    for (int i = 0; i < n; i++){
        flo.push_back({});
        for (int j = 0; j < n; j++){
            cin >> f;
            flo[i].push_back(f);
        }
    }

    for (int x = 0; x < 4; x++){
        if (check(flo,get_ver(flo,n))) break;
        flo = rotate(flo, get_ver(flo,n));;
    }
    print(flo);

}