/*
Print the Pattern below using Easy Formula

        1
     2  3
  4  5  6
7 8 9 10
*/

#include<iostream>

using namespace std;

int main () {
    int n ;
    cout << "Enter no of rows: ";
    cin>>n;

    int row = 1, num = 1;
    while(row <= n) {
      // printing space here first
      int col = 1, space = 1;
      while(space <= n - row ) {
        cout << "  ";
        space++;
      }
      while(col <= row) {
      cout << num << " " ;
      num++;
      col = col + 1;
      }
      row = row + 1;
      cout << endl;
    }
     return 0;
    }