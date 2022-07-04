/*
1
2 3
4 5 6
7 8 9 10
*/
// Print above pattern in C++

// Code

#include<iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the no of rows :";
    cin>>n;

    int row = 1, toPrint = 1;
    while(row <=n) {
        int col = 1;
        while(col<=row) {
            cout << toPrint << " ";
            toPrint = toPrint + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}