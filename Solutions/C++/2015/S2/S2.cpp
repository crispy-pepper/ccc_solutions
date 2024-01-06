#include <bits/stdc++.h>
using namespace std;

int to_num(char c){
    if (c == 'L'){
        return 2;
    }
    else if (c == 'M'){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int j, n, c =0; cin >> j >> n;
    int je[j];

    for (int i = 0; i < j; i++){
        char tmp; cin >> tmp;
        je[i] = to_num(tmp);
    }

    for (int i = 0; i < n; i++){
        char s; int num; cin >> s >> num;

        if (je[num-1] >= to_num(s)){
            je[num-1] = -1;
            c++;
        }
    }

    cout << c << endl;
}