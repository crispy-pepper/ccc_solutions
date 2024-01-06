#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int>peg, dm;

    int q; cin >> q;
    int p, s, c = 0; cin >> p;


    for (int i = 0; i < p; i++){
        cin >> s;
        dm.push_back(s);

    }

    for (int i = 0; i < p; i++){
        cin >> s;
        peg.push_back(s);

    }
    sort(dm.begin(),dm.end());
    sort(peg.begin(),peg.end());

    if (q == 1) {
        for (int i = 0; i < p; i++){
            c += max(dm[dm.size()-1],peg[peg.size()-1]);
            //cout << dm[dm.size()-1] << " " << peg[peg.size()-1] << endl;

            dm.pop_back();
            peg.pop_back();

            
        }
    }

    else {
        for (int i = 0; i < p; i++){
            c += max(dm[0], peg[peg.size()-1]);   
            //cout << dm[0] << " " << peg[peg.size()-1] << endl;


            dm.erase(dm.begin());
            peg.pop_back();
        }
    }
    cout << c << endl;;

}