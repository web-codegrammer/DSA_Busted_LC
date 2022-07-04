#include<iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter no of rows :";
    cin >> n;

    int row = 1;
    while ( row <= n){
        // 1
        int col = 1;
        while ( col <= n - row + 1) {
            cout << col << " ";
            col = col + 1;
        }
        // 2
        col = 1;
        while(col <= (row-1)*2) {
            cout << "* ";
            col = col + 1;
        }
        // 3
        col = n - row + 1;
        while(col >= 1) {
            cout << col << " ";
            col = col - 1;
        }
        cout << endl;
        row = row + 1;
    }
    
}