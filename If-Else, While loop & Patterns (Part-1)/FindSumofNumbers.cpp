#include<iostream>
using namespace std;

int main() {
    int n;
    cout << " Enter the Number : ";
    cin>>n; // Taking n as i/p
    int sum = 0;
    int i = 1;

    while(i<=n) {
        sum = sum + i;
        i = i + 1;
    }
    cout << "Sum from " << 1 << " to " << n << " = " <<sum << endl;
    return 0;
}