/*
Print the Pattern below using Method 2

A 
B C
C D E
D E F Gp
*/

#include<iostream>

using namespace std;

int main () {
    int n ;
    cout << "Enter no of rows: ";
    cin>>n;

    int row = 1;
    char ch = 'A';
    while (row <= n) {
        int col = 1;
        while(col <= row) {
            char ch = ('A' + row + col - 2);
            cout << ch << " ";
            col = col + 1;
        }
        row = row + 1;
        cout << endl;
    }
    return 0;
}