## Binary to Decimal

#include<iostream>
#include<math.h>
using namespace std;

int main () {
    int n;
    cout << "Enter the Binary No: ";
    cin >> n;

    int i = 0, ans = 0;
    while(n!=0) {

        int digit = n % 10;
        if(digit == 1) {
        ans = ans + pow(2,i);
        }
        i++;
        n = n/10; // Dividing becuase we are not calculating bit we are finding digit(%)
    }
    cout << "Your Decimal No is: " << ans << endl;
}