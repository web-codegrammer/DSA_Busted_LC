
#include<iostream>
using namespace std;

// Prime Number or not
int main () {
   int n;
   cout << "Enter the Number: ";
   cin >> n;

    bool isPrime = 1;
   for(int i=2; i<n; i++) {
    //   rem = 0, Not a prime
       if(n%i == 0) {
        //    cout << "Not a Prime Number" << endl;
           isPrime = 0;
           break;
       }
   }
       if(isPrime == 0) {
           cout << "Not a Prime Number" << endl;
       }
       else
       {
           cout << "is a Prime Number" << endl;
       }
   }