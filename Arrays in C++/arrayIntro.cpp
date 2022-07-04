#include<iostream>
using namespace std;

// HOLD
void printArray(int arr[], int size) {

cout << "Printing the array" << endl;

    // print the aaray
    for(int i = 0; i<size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl << "Printing is DONE" << endl;
}

int main () {

    // Declartion of array

    int number[15];

    // Accessing an Array
    cout << "Value at 15 Index: " << number[14] << endl;


    // Initialization of Array

    int second[3] = {5,7,11};

    // accessing an element
    cout << "Value at 2nd Index: " << second[2] << endl;

    int third[15] = {2,7};

    int n = 15;

    // printArray(third,15);

    int thirdsize = sizeof(third)/sizeof(int);
    cout << "Size of third is:" << thirdsize << endl;

    // initializing all values with "0" in array
    int fourth[10] = {0};
    n = 10;

    // printArray(fourth,10);


    int fifth[10];

    n = 10;
 // initializing all values with "1" in array
    fill_n(fifth,10,1);

    // print the aaray
    // printArray(fifth,10);

    int fifthsize = sizeof(fifth)/sizeof(int);
    cout << "Size of fifth is:" << fifthsize << endl;


    // Character Array
    char ch[5] = {'a','b','c','d','e'};

    cout << ch[3] << endl;

    // printing array
    cout << "Printing the array" << endl;

    // print the aaray
    for(int i = 0; i<5; i++) {
        cout << ch[i] << " ";
    }

    cout << endl << "Printing is DONE" << endl;

    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];

    cout << endl << "Everything is fine" << endl << endl;

    return 0;
} 