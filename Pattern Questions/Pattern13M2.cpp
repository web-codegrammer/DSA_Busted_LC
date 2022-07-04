/*
Print the Pattern below using Method 2

A B C
B C D
C D E
*/

#include<iostream>

using namespace std;

int main () {
    int n ;
    cout << "Enter no of rows: ";
    cin>>n;

    int row = 1;
    while (row <= n)
    {
        char ch = 'A' + row -1;
        int col = 1;
        while (col <= n) {
            cout << ch << " ";
            ch = ch + 1;
            col = col + 1;
        }
        row = row + 1;
        cout << endl;
    }

    return 0;
}