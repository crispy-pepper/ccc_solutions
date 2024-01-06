#include <iostream>
using namespace std;


int main(){
    int lim, sp, fine;

    cout << "Enter the speed limit: ";
    cin >> lim;

    cout << "Enter the recorded speed of the car: ";
    cin >> sp;

    if (lim >= sp)
        cout << "Congratulations, you are within the speed limit!" << endl;
    else {
        if (sp - lim <= 20) fine = 100;
        else if (sp - lim <= 30) fine = 270;
        else fine = 500;

        cout << "You are speeding and your fine is $" << fine << " ." << endl;
    }

}