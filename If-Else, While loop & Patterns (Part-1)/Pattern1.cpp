/*
****
****
****
****
*/
// Print above pattern in C++

// Code

#include<iostream>
using namespace std;

int main() {
    int n; // Kitni row bana ni hai
    cin >> n;

    int i = 1; // 1st row se chalu krna hai

    while (i <= n){ // pheli row se nth row takk jaaega

        int j = 1; // i = row, j = col
        while(j<=n) {
            cout<< "*";
        j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}