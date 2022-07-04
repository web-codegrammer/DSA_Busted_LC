/*
1 2 3
1 2 3
1 2 3
*/
// Print above pattern in C++

// Code

#include<iostream>
using namespace std;

int main() {
    int n; // Kitni row bana ni hai
    cin >> n;

    int i = 1; // 1st row se chalu krna hai

    while(i<=n) {
        int j = 1;
        while(j <=n) {
            cout <<j; //cout << n-j+1;// to print it in reverse order
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}