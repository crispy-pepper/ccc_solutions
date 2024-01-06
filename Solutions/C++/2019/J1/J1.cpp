#include <iostream>
using namespace std;

int main() {
  int a3, a2, a, b3, b2, b;

  cin >> a3 >> a2 >> a >> b3 >> b2 >> b;

  int an = (a3*3) + (a2*2) + a;
  int bn = (b3*3) + (b2*2) + b;

  if (an > bn) cout << "A" << endl;
  else if (an < bn) cout << "B" << endl;
  else cout << "T" << endl;
}