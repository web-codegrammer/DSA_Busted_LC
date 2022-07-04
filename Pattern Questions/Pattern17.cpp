/*
Print the Pattern below using Method 2

D 
C D
B C D
A B C D
*/

#include<iostream>

using namespace std;

int main () {
    int n ;
    cout << "Enter no of rows: ";
    cin>>n;

    int row = 1;
    while (row <= n) {
        int col = 1;
        char start = 'A' + n - row;
        while(col <= row) {
            cout<< start << " ";
            start = start + 1;
            col = col + 1;
        }
        row = row + 1;
        cout << endl;
    }
    return 0;
}