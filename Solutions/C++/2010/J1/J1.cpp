#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    cout << (n/2 + 1) - (n > 5)*(n-5) << endl;
}