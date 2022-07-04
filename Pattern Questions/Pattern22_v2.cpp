/*
Print the Pattern below using Easy Formula

1 2 3 4
  2 3 4
    3 4
      4 
  */

// Code is wrong to be done later
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
      while(space <= row) {
        cout << "  ";
        space++;
      }
      while(col <= n- row +1) {
      cout << num << " " ;
      num = num + 1;
      col = col + 1;
      }
      row = row + 1;
      cout << endl;
    }
     return 0;
    }