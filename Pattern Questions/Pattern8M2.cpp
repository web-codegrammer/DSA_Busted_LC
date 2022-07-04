/*
1
2 3
3 4 5
4 5 6 7
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
        int col = row;
        while(col< row * 2) {
            cout << col << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}