// CCC 2020 Senior 3: Searching for Strings
/*
A permutation of the needle will always have the same letter frequencies as the needle
A subtring that is the length of the needle and shifts right by one each time is every possible string that could be a permutation in the haystack
Comparing the frequencies of the needle and substring will tell if it is a permutation
Since it shifts by only one each time, the frequencies do not need to be recalculated, rather just subtract 1 from the removed letter and add 1 to the added letter
If it were to be recalculated, it would take too long

Each permutation can be stored in a set
However, there is not enough allocated space for subtask 4
This can be solved by hashing the string and then storing it in a set
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    string needle, haystack; cin >> needle >> haystack;
    int n = needle.length();
    set<size_t> perm;
    hash<string> h;

    map<char,int> freqneedle,freqlast;
    string last = haystack.substr(0,n);
    for (int i = 0; i < n;i++){
        freqneedle[needle[i]]++;
        freqlast[last[i]]++;
    }

    for (int i = n; i < haystack.length();i++){
        if (freqlast == freqneedle){
            perm.insert(h(last));
        }
        freqlast[last[0]]--; if (freqlast[last[0]] == 0) freqlast.erase(last[0]);
        last = last.substr(1,n)+haystack[i];
        freqlast[last[n-1]]++;
    }
    if (freqlast == freqneedle){
        perm.insert(h(last));
    }
   
    cout << perm.size()<<endl;
}