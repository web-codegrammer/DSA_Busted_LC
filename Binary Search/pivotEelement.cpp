#include<iostream>
using namespace std;
#include<math.h>

int getPivot(int arr[], int n) {
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {
        if(arr[mid] >= arr[0]) {
            s = mid + 1;
        }
        else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}


int main() {

    int arr[5] = {11,8,17,1,3};

    cout << "Pivot is at Index " << getPivot(arr,5) << endl;

    return 0;
}