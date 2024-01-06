#include <iostream>
using namespace std;

int not_fun(){
    int a = 0, b = 0;
    char type, var, var2;
    int val;
    while (true){
        cin >> type >> var;

        switch (type-'0'){
        case 1:
            cin >> val;
            if (var == 'A')
                a = val;
        
            else 
                b = val;
            break;
        case 2:
            if (var == 'A')
                cout << a << endl;
        
            else 
                cout << b << endl;
            break;
        case 3:
            cin >> var2;
            if (var == 'A')
                if (var2 == 'A')
                    a = a+a;
                else
                    a = a+b;
                
        
            else 
                if (var2 == 'A')
                    b =b+a;
                else
                    b = b+b;
                
            break;
        case 4:
            cin >> var2;
            if (var == 'A')
                if (var2 == 'A')
                    a = a*a;
                else
                    a = a*b;
                
        
            else 
                if (var2 == 'A')
                    b =b*a;
                else
                    b = b*b;
                
            break;
        case 5:
            cin >> var2;
            if (var == 'A')
                if (var2 == 'A')
                    a = a-a;
                else
                    a = a-b;
                
        
            else 
                if (var2 == 'A')
                    b =b-a;
                else
                    b = b-b;
                
            break;
        case 6:
            cin >> var2;
            if (var == 'A')
                if (var2 == 'A')
                    a = a/a;
                else
                    a = a/b;
                
        
            else 
                if (var2 == 'A')
                    b =b/a;
                else
                    b = b/b;
                
            break;
        default:
            return 0;
            break;
        }
    }
    return 0;
}

int main(){
    not_fun();
}