#include<iostream>
using namespace std;

int main ()
{
    
    int row;
    cin >> row;

    int col;
    cin >> col;

    // Creating a 2D Array
    int** arr = new int*[row];
    for(int i=0; i<row; i++)
    {
        arr[i] = new int[col];
    }

    // Taking i/p
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Taking O/p
    cout << endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory --> row wale arrays
    for(int i=0; i<row; i++)
    {
        delete [] arr[i];
    }

    // releasing memory for int*[n] arrays
    delete []arr;


    // What i learnt in this lec:
    /*
    - How to create a 2D aaray dynamically
    - IP/OP
    - How to release memory from heap space
    */
}