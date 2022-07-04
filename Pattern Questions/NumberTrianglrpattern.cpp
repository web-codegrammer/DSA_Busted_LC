/*
1
2 2
3 3 3
4 4 4 4
*/
// Print above pattern in C++

// Code

#include<iostream>
using namespace std;

int main() {
    int n ;
    cout<< " Enter no of rows: ";
    cin>>n;

    int row = 1;
    while(row <= n) {
        int col = 1;
        while(col <= row){
            cout<< row;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}