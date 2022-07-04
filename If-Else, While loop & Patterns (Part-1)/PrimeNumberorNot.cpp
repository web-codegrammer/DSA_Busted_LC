#include<iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter the value of n : ";
    cin>>n;

    int i = 2; // 2 se hi chalu krna hoga yaha!

    while(i<n) { // n ke barabar toh hum rakh hi nhi sakte
        /*
        // Divide hogaya then not prime
        if(n % i == 0) {
            cout << "Not Prime for "<< i <<endl;
            return 0;
        }
        else {
            cout<< "Prime for "<< i <<endl;
        }
        i = i + 1; //i ko inc nhi karoge toh wo infinite loop mai chala jaaega
        */

        if(n % i == 0) {
            cout << n << " is Not Prime" << endl;
            return 0;
        }
        i = i + 1;
    }  
    cout << n << " is Prime" <<endl;
    return 0;
}