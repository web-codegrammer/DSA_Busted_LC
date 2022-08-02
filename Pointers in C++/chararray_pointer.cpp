#include<iostream>
using namespace std;

int main () {
    /*
    int arr [5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout << arr << endl; // prints the address of 0th index
    // Attention here
    cout << ch << endl;  // prints whole array

    char *c = &ch[0];
    // prints the entire string
    // cout << c << endl;
    */

    char temp = 'z';

    char *p = &temp;
    cout << p << endl;

    return 0;
}