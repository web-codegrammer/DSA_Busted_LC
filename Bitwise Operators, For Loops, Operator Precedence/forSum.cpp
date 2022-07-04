#include<iostream>
using namespace std;

// Print sum from 1 to n
int main () {
   int n ;
   cout << "Enter the value of n: ";
   cin >> n;

   int sum = 0;
   for(int i = 1; i<=n; i++) {
       sum += i;
   }
    cout << sum << endl;
} 