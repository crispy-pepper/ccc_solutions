#include <iostream>
#include <string>
using namespace std;

int main() {
  int a,n;
  char c;

  cin >> n;

  for (int i = 0; i < n; i++){
    cin >> a >> c;
    cout << string(a,c) << endl;
  }
}