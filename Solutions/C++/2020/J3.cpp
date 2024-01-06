#include <iostream>
using namespace std;

int main() {
  int l, x, y, sx = 101, sy = 101, bx = 0, by = 0;
  char d;

  cin >> l;
  
  for (int i; i < l; i++){
    cin >> x >> d >> y;

    if (x < sx) sx = x;
    if (x > bx) bx = x;

    if (y > by) by = y;
    if (y < sy) sy = y;
  }

  cout << sx-1 << "," << sy-1 << endl;
  cout << bx+1 << "," << by+1 << endl;
}
