// CCC 2020 Senior 1: Surmising a Sprinter’s Speed
/*
After sorting the list of times and postition by time, the speed can be found by finding the absolute difference between the current position and the next position
Store these speeds in an array and output the greatest speed
*/

#include <bits/stdc++.h>
using namespace std;;

int main(){
    double x, y;
    int t; cin >> t;
    vector<double> speed;
    vector<vector<double>> times;

    for (int i = 0; i < t; i++){
        cin >> x >> y;
        times.push_back({x,y});
    }

    sort(times.begin(),times.end());
    for (int i = 0; i < t-1; i++)
        speed.push_back(abs(times[i][1]-times[i+1][1])/abs(times[i][0]-times[i+1][0]));
        

    cout << fixed << *max_element(speed.begin(),speed.end()) << endl;
}