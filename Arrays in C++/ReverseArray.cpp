#include<iostream>
#include<math.h>
using namespace std;

void swaparr(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while(start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[6] = {1, 4, 0, -2, 15, 12};
    int arr2[5] = {2, 6, 3, 9, 5};

    swaparr(arr1,6);
    swaparr(arr2,5);

    printArray(arr1,6);
    printArray(arr2,5);
     
    return 0;
}