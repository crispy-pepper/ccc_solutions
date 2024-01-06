#include <iostream>
using namespace std;

int main() {
  int n,a,b;
  string d;

  while (true){
    cin >> n;

    a = n/1000 - n/10000*10 + n/10000;

    if (n == 99999) break;

    if (a == 0) d = d;
    else if (a % 2 == 0) d = "right ";
    else d = "left ";

    cout << d << n % 1000 << endl;
  }

}