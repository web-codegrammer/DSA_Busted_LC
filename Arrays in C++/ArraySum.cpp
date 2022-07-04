#include<iostream>
#include<math.h>
using namespace std;

int sumArray(int arr[], int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum+=arr[i];
    }
    return sum;
}

int main() {

    int arr[100], size;
    cin >> size;

    // taking i/p in array
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }

    cout << endl;

    cout << "The Sum of all elements in array is " <<sumArray(arr,size) << endl;
    return 0;
}