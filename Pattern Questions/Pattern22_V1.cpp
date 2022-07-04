/*
Print the Pattern below using Easy Formula

      1
    2 2
  3 3 3
4 4 4 4
  */

#include<iostream>

using namespace std;

int main () {
    int n ;
    cout << "Enter no of rows: ";
    cin>>n;

    int row = 1;
    while(row <= n) {
      // printing space here first
      int col =1, space =1;
      while(space <= n - row) {
        cout << " ";
        space++;
      }
      while(col <= row) {
      cout << row;4
      col = col + 1;
      }
      row = row + 1;
      cout << endl;
    }
     return 0;
    }