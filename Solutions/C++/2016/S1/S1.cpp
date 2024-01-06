#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, ss, a = "A"; cin >> s >> ss;
    deque<char> s1(s.begin(),s.end()), s2(ss.begin(),ss.end());

    

    sort(s1.begin(),s1.end(),greater<int>());
    sort(s2.begin(),s2.end(),greater<int>());

    for (int i = 0; i < s1.size();i++){
        if (s1[0]==s2[0]){
            s1.pop_front();
            s2.pop_front();
        }
        else{

            if (s2[0]>s1[0]){
                a = "N";
                break;
            }
            else if (s2[s2.size()-1] =='*'){
                s1.pop_front();
                s2.pop_back();
            }

            else{
                a = "N";
                break;
            }
        }
    }

    cout << a << endl;
}