#include<iostream>
using namespace std;

int main () {
   int n ;
   cout << "Enter the value of n: ";
//    cin >> n;
   /*
    int i = 1;
   for(; ;) {
       if(i<=n) {
            cout << i << endl;
       } else {
           break;
       }
       i++;
   }
   */
//    Processing multiple variables and conditions 
    for(int a = 0, b = 1, c=2; a>=0 && b>=1 && c>=2; a--,b--,c--) {
        cout <<a << " " << b << " " << c << endl;
    }
}