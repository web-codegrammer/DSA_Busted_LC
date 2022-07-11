#include<iostream>
using namespace std;


bool isPresent(int arr[][3], int target, int i, int j) {
    for(int i =0; i<3; i++) {
        for(int j =0; j<3; j++) {
            if(arr[i][j] == target) {
                return 1;
            }
        }
    }
    return 0;
}

// to print column wsie sum
void printColSum(int arr[][3], int i, int j) {
cout << "Printing sum --> " << endl;
for(int j=0; j<3; j++) {
    int sum = 0;
    for(int i=0; i<3; i++) {
        sum += arr[i][j];
    }
    cout << sum << " ";
    }
}




// to print row wise sum
void printSum(int arr[][3], int i, int j) {
cout << "Printing sum --> " << endl;
for(int i=0; i<3; i++) {
    int sum = 0;
    for(int j=0; j<3; j++) {
        sum += arr[i][j];
    }
    cout << sum << " ";
    }
}

int largestRowSum(int arr[][3], int i, int j) {

    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int i=0; i<3; i++) {
        int sum = 0;
        for(int j=0; j<3; j++) {
            sum += arr[i][j];
        }
       
       if(sum > maxi) {
        maxi = sum;
        rowIndex = i;
       }
    }

    cout << "The Maximum Sum is --> " << maxi << endl;
    return rowIndex;

}

int main () {
    
    // creating a 2D array
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,14,16};
    int arr[3][3];
    // Taking row-wise hardcoded o/p
    // int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    // taking input --> row wise input
    cout << "Enter the elements " << endl;
    for(int i =0; i<3; i++) {
        for(int j =0; j<3; j++) {
            cin >> arr[i][j];
        }
    }

    // taking input --> col wise input
    // for(int i =0; i<4; i++) {
    //     for(int j =0; j<3; j++) {
    //         cin >> arr[j][i];
    //     }
    // }

    // printing the 2D array
    cout << "Printing the array " << endl;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
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
    
    int ansIndex = largestRowSum(arr,3,3);
    cout << "Max Row is at Index " << ansIndex << endl;
   
    return 0;
}