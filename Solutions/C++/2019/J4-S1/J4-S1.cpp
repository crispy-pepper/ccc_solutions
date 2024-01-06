#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string str;
    char box[4] = {'1','2','3','4'}, t1, t2;
    cin >> str;
    if (count(str.begin(),str.end(),'V')%2) {
        t1 = box[0];
        box[0] = box[1];
        box[1] = t1;
        t2 = box[2];
        box[2] = box[3];
        box[3] = t2;
    }
    
    if (count(str.begin(),str.end(),'H')%2) {
        t1 = box[2];
        t2 = box[3];
        box[3] = box[1];
        box[2] = box[0];
        box[1] = t2;
        box[0] = t1;
    }
    
    cout << box[0] << ' ' << box[1] << endl << box[2] << ' ' << box[3] << endl;
}
