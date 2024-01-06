//This does not catch improper inputs so it will crash if so

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main(){
  unordered_map<int,vector<string>> d;
  string name;
  int num, a;

  cin >> a;

  for (int i = 0; i < a; i++) {
    cin >> name >> num;
    d[num].push_back(name);
  }

  for (auto i:d) if (i.first >= num){
    num = i.first; 
    name = i.second[0];
  }
   
  cout << name << endl;
}
