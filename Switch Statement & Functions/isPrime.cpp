//   Prime or not
#include<iostream>
using namespace std;

// 1 --> Prime no.
// 0 --> Not a prime no

bool isPrime(int n) {

for(int i=2; i<n; i++) {
    // divide hogaya hai not a prime no
    if(n%i == 0) {
        return 0;
    }
}
return 1;
}

int main () {

    int n;

    cin >> n;

    if(isPrime(n)) {
        cout << " is a Prime No" << endl;
    } else
    {
        cout << "Not a prime No" << endl;
    }

    return 0;
}
