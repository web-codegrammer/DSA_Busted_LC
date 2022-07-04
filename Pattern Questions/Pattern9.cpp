/*
1
2 1
3 2 1
4 3 2 1
*/
// Print above pattern in C++ using Method 2

// Code

#include<iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the no of rows :";
    cin>>n;

    int row = 1;

    while(row<=n) {
        int col = 1;
        while(col<=row) {
            cout << (row - col + 1) << " "; // Formula is important
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    return 0;
}