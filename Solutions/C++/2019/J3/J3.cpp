#include <iostream>

using namespace std;

int main() {
  int n, c = 0;
  string i;
  char last;
  cin >> n;


  for (int j = 0; j < n; j++){
    cin >> i;
    
    for (int j = 0; j < i.size(); j++) {
      if (i[j] != last && j != 0){
        cout << c << ' ' << last << ' ';
        c = 0;
      }
      last = i[j];
      c++;
    }
    cout << c << ' ' << last << endl;
    last = '\0';
    c = 0;
  }

}