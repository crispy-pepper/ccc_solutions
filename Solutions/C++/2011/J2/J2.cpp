#include <iostream>
#include <cmath>
using namespace std;


int main() {
  int h,m,a;
  cin >> h >> m;

  for (int t = 1; t < m + 1; t++){
    a = -6*pow(t,4) + h*pow(t,3) + 2*pow(t,2) + t;
    if (a <= 0){
      cout << "The balloon first touches ground at hour: \n" << t << endl;
      break;
    }
  }

  if (a > 0) cout << "The balloon does not touch ground in the given time." << endl;

}