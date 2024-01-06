#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int mid = n/2;

    sort(v.begin(),v.end());
    deque<int> low,high;
    for (int i = 0; i < mid; i++){
        low.push_back(v[i]);
    }

    sort(low.begin(), low.end(), greater <>());

    for (int i = mid; i < n; i++){
        high.push_back(v[i]);
    }



    for (int i = 0; i < n; i++){
        if (i % 2 == 0){
            cout << low.front() << " ";
            low.pop_front();
        }
        else {
            cout << high.front() << " ";
            high.pop_front();
        }
    }

}