#include <iostream>
using namespace std;

int main(){
    int  t1, t2, t3;

    cin >> t1 >> t2 >> t3;

    if (t1 + t2 + t3 != 180) cout << "Error" << endl;
    else if (t1 == t2 == t2) cout << "Equilateral" << endl;
    else if (t1 != t2 != t3) cout << "Scalene" << endl;
    else cout << "Isosceles" << endl;
    //bruh its outputing the same thing but it says it wrong
}