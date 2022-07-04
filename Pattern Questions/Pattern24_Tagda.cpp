/*
Print the Pattern below using Easy Formula

1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1 
1 2 * * * * * * 2 1
1 * * * * * * * * 1

  */

#include<iostream>

using namespace std;

int main () {
    int n ;
    cout << "Enter no of rows: ";
    cin>>n;

    // Part I: Print 1st triangle (Num from 1 to n-row+1)
    int row = 1;
    while(row <= n) {
        int col = 1;
        while ( col <= n - row + 1) {
            cout << col << " ";
            col = col + 1;
        }

    // Part II: Starts = (i-1)*2 times
        col = 1;
        while(col <= (row-1)*2){
            cout << "* ";
            col = col + 1;
        }
    // Part III: Print 2nd triangle Num from n-row+1 to 1
        col = n - row + 1;
        while(col >= 1) {
            cout << col << " ";
            col = col - 1;
        }
        row = row + 1;
        cout << endl;
    } 
     return 0;
    }