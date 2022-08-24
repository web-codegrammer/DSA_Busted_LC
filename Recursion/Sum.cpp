#include<iostream>
using namespace std;

int getSum(int *arr, int size){

    // base case
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }

    int remSum = getSum(arr+1, size-1);
    int sum = arr[0] + remSum;
    return sum;
}


int main ()
{
    int arr[5] = {2,4,9,9,9};
    int size = 5;

    int sum = getSum(arr, size);

    cout << "Sum of Array is " << sum << endl; 

    return 0;
}