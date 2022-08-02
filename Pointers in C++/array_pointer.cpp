#include<iostream>
using namespace std;

int main () {

    int arr[10] = {23,122,41,67};
    /*
    cout << "Address of 1st memory block is " << arr << endl;
    cout << "Address of 1st memory block is " << &arr[0] << endl;

    cout << "Value of *arr: " << *arr << endl;
    cout << "Value of *arr+1: " << *arr + 1 << endl;

    cout << "Value of *(arr+1): " << *(arr + 1) << endl;
    cout << "Value of *(arr)+1: " << *(arr) + 1 << endl;

    cout << "Value at arr[2]: " << *(arr+2) << endl;
    cout << "Value at arr[2]: " << arr[2] << endl;

    int i = 3;
    cout << i[arr] << endl;

 

    int temp[10];

    cout << sizeof(temp) << endl; // 10*4 = 40

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl; // 8 bytes
       

    int a[20] = {1,2,3,5};

    cout << "--> " << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << "--> " << &p << endl;
    */

    int array[10];

    // array = array + 1; --> Will give error as entries in ST can't be changed

    int *ptr = &array[0];
    cout << ptr << endl;
    ptr = ptr + 1; // 710 + 1
    cout << ptr << endl;

    
    return 0;

}