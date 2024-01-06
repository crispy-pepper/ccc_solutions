#include <iostream>
using namespace std;

int main() {
  int t,n,r,d = 0;

  cin >> t >> n >> r;
  int i = n, i_s = n;

  while (i <= t){
    i += i_s*r;
    i_s *= r;
    d += 1;
  }
  
  cout << d << endl;
}
