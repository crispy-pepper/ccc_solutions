#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <algorithm>
using namespace std;

bool check(unordered_map<int,vector<int>> pages, set<int> n, int start){
    if (n.empty()) return true;
    for (int i:pages[start]){
        n.erase(n.find(start));
        cout << start << " -> " << i << ": ";
        for (int x:n){
            cout << x << " ";
        }
        cout << endl;
        check(pages,n,i);
        
    }
    return false;
}

int main(){
    unordered_map<int,vector<int>> pages;
    int n; cin >> n;
    set<int> ns;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        pages[i] = {};
        for (int j = 0; j < x; j++){
            int s; cin >> s;
            pages[i].push_back(s-1);
        }
        ns.insert(i);
    }

    cout << endl;
    cout << check(pages,ns,0);
}