#include <iostream>
#include <string>
#include <set>
using namespace std;



int main(){
    string ye;
    int num; cin >> num;

    while (true) {
        num++;
        ye = to_string(num);
        set<char> yer(ye.begin(),ye.end());

        if (yer.size() == ye.size()) break;
    }

    cout << num << endl;  
}
