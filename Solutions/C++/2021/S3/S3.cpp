#include <bits/stdc++.h>
using namespace std;

int close(int c, int x, int y){
    if (abs(c - x) > abs(c - y))
        return abs(c-y);
    else
        return abs(c-x);
    return 0;
}
int get_timei(int start, vector<int> fri){
    if (start == fri[2]+fri[1] || start == fri[2]-fri[1]) return 0;
    int x = fri[2]+fri[1], y = fri[2]-fri[1];


    return close(start, x, y)*fri[0];
}

int main(){
    int n; cin >> n; //n <= 200000
    int r1 = 0, r2 = 0, r=0;
    vector<vector<int>> friends;
    vector<int> s;

    for (int i = 0; i < n; i++){
        int x, y, z;
        cin >> x >> y >> z;
        friends.push_back({y,z,x});
        r1 += abs(x)+z;
        r+=abs(x);
        r2 += abs(x)-z;
        s.push_back(x);
    }

    vector<int> v;
    int small;
    small = 1000000000;
    for (int w = *min_element(s.begin(),s.end()); w <= *max_element(s.begin(),s.end()); w++){
        int k = 0;
        for (vector<int>fff:friends){
            k += get_timei(-10,fff);
            //cout << k << endl;
        }

        v.push_back(k);
        if (small > k){
            small = k;
        }
        else {
            break;
        }
        cout << "Start: " << w << "  Time: " << k << endl;
    }

    /*for (int ko:v){
        cout << ko << endl;
    }*/

    cout << *min_element(v.begin(),v.end()) << endl << *min_element(s.begin(),s.end()) << endl << small;

}