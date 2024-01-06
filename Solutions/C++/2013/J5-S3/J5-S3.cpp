#include <bits/stdc++.h>
using namespace std;
vector<int> wins = {};

bool isDuplicate(int f, vector<int> v, int i){
    v[i] = -1;
    for (int n:v){
        if (f == n) return true;
    }
    return false;
}


void play(vector<int> points, vector<pair<int,int>> games, int t){
    if (games.empty()){
        int m = *max_element(points.begin(),points.end());
        if (points[t] == m && !isDuplicate(m,points,t))
            wins.push_back(1);
        return;
    }

    pair<int,int> game = games[0];
    games.erase(games.begin());
    int a = game.first,b = game.second;
    points[a] += 3;
    play(points,games,t);
    points[a] -= 2;
    points[b] += 1;
    play(points,games,t);
    points[a] -= 1;
    points[b] += 2;
    play(points,games,t);
}


int main(){
    int t,g,c=0; cin>>t>>g;
    //int gl = 6-g;
    vector<int> points = {-1,0,0,0,0};
    vector<pair<int,int>> games = {make_pair(1,2),make_pair(1,3),make_pair(1,4),make_pair(2,3),make_pair(2,4),make_pair(3,4)};


    for (int i = 0;i<g;i++){
        int t1,t2,s1,s2; cin >> t1 >> t2 >> s1 >> s2;
        if (s1 > s2){
            points[t1] += 3;
        }
        else if (s1 < s2){
            points[t2] += 3;
        }
        else{
            points[t1]++;
            points[t2]++;
        }
        games.erase(find(games.begin(),games.end(),minmax({t1,t2})));
    }

    play(points,games,t);
    cout << wins.size() << endl;
    
}