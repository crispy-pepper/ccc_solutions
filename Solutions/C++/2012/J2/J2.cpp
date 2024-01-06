#include <iostream>
using namespace std;


int main(){
    int fish[4];


    cin >> fish[0] >> fish[1] >> fish[2] >> fish[3];

    if (fish[0] < fish[1] && fish[2] < fish[3] && fish[1] < fish[2]) cout << "Fish Rising" << endl; 
    else if (fish[0] > fish[1] && fish[2] > fish[3] && fish[1] > fish[2]) cout << "Fish Diving" << endl; 
    else if (fish[0] == fish[1] == fish[2] == fish[3]) cout << "Fish At Constant Depth" << endl; 
    else cout << "No Fish" << endl;


}