//   Simple and nested switch

#include<iostream>
using namespace std;

int main () {

    char ch = '1';
    int num = 1;

    cout << endl;
    switch( 2*num ) {

        case 2: cout << "First" <<endl;
                cout << "First Again" <<endl;
                break;

        case '1': switch(num) {
            case 1: cout << "Value of num is : " << num << endl;
                    break;
        } 
                break;

        default: cout << "It is default case" <<endl; // Not mandatory
    }
    cout << endl;
    return 0;
}
