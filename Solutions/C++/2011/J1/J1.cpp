#include <iostream>
using namespace std;

int main() {
  int a, e;
  cout << "How many antennas?" << endl;
  cin >> a;
  cout << "How many eyes?" << endl;
  cin >> e;


  if (a >= 3 && e <= 4) cout << "TroyMartian" << endl;
  if (a <= 6 && e >= 2) cout << "VladSaturnian" << endl;
  if (a <= 2 && e <= 3) cout << "GraemeMercurian" << endl;
}