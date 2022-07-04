#include<iostream>
#include<math.h>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SortOne(int arr[], int n) {
    int l = 0;
    int r = n-1;

    while(l < r) {
        
        while(l<r && arr[l] == 0) {
            l++;
        }
        while(l<r && arr[r] == 1) {
            r--;
        }

        // Agar yaha phauch gaye ho, iska maylab
        // arr[l] == 1 and arr[r] == 0
        if(l<r) {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
    }
}

int main() {

    // int arr[8] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    int arr[10] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};

    SortOne(arr, 10);
    printArray(arr, 10);
   
    return 0;
}