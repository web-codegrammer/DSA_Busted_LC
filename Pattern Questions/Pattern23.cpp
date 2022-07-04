/*
Print the Pattern below using Easy Formula
      1
    1 2 1   
  1 2 3 2 1 
1 2 3 4 3 2 1       
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
      // Print the space triangle(1st)
        int space = n - row;
        while(space) {
          cout << "  "; // Double space here
          space--;
        }

      // Print 2nd triangle
      int col =1;
      while(col <= row) {
        cout << col << " ";
        col = col + 1;
      }

      // Print 3rd triangle
      int start = row -1;
      while(start){
        cout << start << " ";
        start--;
      }

      row = row + 1;
      cout << endl;
    }
     return 0;
    }