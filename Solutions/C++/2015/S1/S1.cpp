#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    deque<int> d;

    for (int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        if (tmp == 0){
            d.pop_front();
        }
        else d.push_front(tmp);

    }

    cout << accumulate(d.begin(),d.end(),0) << endl;
}