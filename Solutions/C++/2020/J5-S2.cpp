// CCC 2020 Senior 2: Escape Room
/*
This solution works backwards rather than forwards so factors do not have to be calculated (too time consuming)
To further speed up the computing process certain numbers are hashed to jumpable cells (not all factors, just the ones within the room)
A while loop appends cells to a set (reduces repetition) that needs to be checked; the loop will end if (0,0) is in the check set or if there is no longer any possible options
After each number is checked, the entire number is erased to prevent checking the same number again
A visited array may also be used, but will not pass due to time contraints
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int r,c; cin >> r >> c;
    vector<vector<int>> room(r,vector<int>(c));
    map<int,set<pair<int,int>>> can;
    for (int i = 0; i <r; i++){
        for (int j = 0; j<c;j++){
            int tmp; cin >> tmp;
            room[i][j] = tmp;
            can[tmp].insert(make_pair(i,j));
        }
    }
    int n = r*c;
    string ans = "no";
    set<pair<int,int>> f = can[n];

    while (!f.empty()){
        pair<int,int> h = *f.begin();
        int rt=h.first,ct=h.second;
        if (rt == 0 && ct ==0){
            ans = "yes";
            break;
        }
        n = (rt+1)*(ct+1);
        f.erase(f.begin());
        f.insert(can[n].begin(),can[n].end());
        can[n] = {};
    }

    cout << ans << endl;
}