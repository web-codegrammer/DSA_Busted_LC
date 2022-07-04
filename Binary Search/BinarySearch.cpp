#include<iostream>
using namespace std;
#include<math.h>

int BinarSearch(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;
    int mid = (start) + (end-start)/2;

    while(start<=end) {
        if(arr[mid] == key) {
            return mid;
        }
        // Go to right of mid key
        if(key > arr[mid]) {
            start = mid+1;
        } else // key < arr[mid] 
        {
            end = mid - 1;
        }
        mid = (start) + (end-start)/2;
    }
    return -1;
}


int main() {

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int evenIndex = BinarSearch(even, 6 , 6);

    cout << "Index of key 6 is: " << evenIndex << endl;

    int oddIndex = BinarSearch(odd, 5, 14);

    cout << "Index of key 14 is: " << oddIndex << endl;

    return 0;
}