#include<iostream>
using namespace std;



int main () {
    
    // creating a 2D array
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,14,16};
    // int arr[3][3];
    // Taking row-wise hardcoded o/p
     int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    // taking input --> row wise input
    // cout << "Enter the elements " << endl;
    // for(int i =0; i<3; i++) {
    //     for(int j =0; j<3; j++) {
    //         cin >> arr[i][j];
    //     }
    // }

    // taking input --> col wise input
    // for(int i =0; i<4; i++) {
    //     for(int j =0; j<3; j++) {
    //         cin >> arr[j][i];
    //     }
    // }

    // printing the 2D array Col wise
    cout << "Printing the array " << endl;
    for(int j=0; j<4; j++) {
        for(int i=0; i<3; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // cout << "Enter the element to be searched: " << endl;
    // int target;
    // cin>>target;

    // if(isPresent(arr,target,3,3)) {
    //     cout << "Element Found" << endl;
    // }
    // else {
    //     cout << "Element not found" << endl;
    // }

    // // printSum(arr,3,3);

    // printColSum(arr,3,3);
    
    // int ansIndex = largestRowSum(arr,3,3);
    // cout << "Max Row is at Index " << ansIndex << endl;
   
    return 0;
}