#include <bits/stdc++.h>
using namespace std;

int main(){
    int hhhhhhhhhhh; cin>>hhhhhhhhhhh;
    for (int ggg = 0; ggg<hhhhhhhhhhh;ggg++){
        int n; cin >>n;
        deque<int> branch,order;
        for (int i = 0; i<n;i++){
            int temp; cin >> temp;
            order.push_front(temp);
        }
        char p='Y';
        int t = 1;
        while (true){
            if (order[0] == t){
                order.pop_front();
                t++;
            }
            else if (branch[0] == t){
                branch.pop_front();
                t++;
            }
            else if (!order.empty()){
                branch.push_front(order[0]);
                order.pop_front();
            }
            else if (!branch.empty()){
                p = 'N';
                break;
            }
            else{
                break;
            }
        }

        cout << p << endl;
    }
}