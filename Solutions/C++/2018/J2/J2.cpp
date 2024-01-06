#include <iostream>
using namespace std;

int main() {
  int n, num = 0;
  string str1, str2;

  cin >> n >> str1 >> str2;

  for (int i = 0; i < n; i++)
    num += (str1[i] == str2[i] && str1[i] == 'C');

  cout << num << endl;

}