#include <iostream>
using namespace std;

int main() {
  int x,y,z,i;
  string c[2] = {"ignore","answer"};
  cin >> x >> y >> z >> i;

  cout << c[((x==8 || x==9) && (i==8 || i== 9) && (y ==z))];
}