/*
Print the Pattern below using Method 2

A 
B C
D E F
G H I J
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
            cout << ch << " ";
            ch = ch + 1;
            col = col + 1;
        }
        row = row + 1;
        cout << endl;
    }
    return 0;
}