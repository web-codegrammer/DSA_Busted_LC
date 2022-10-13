#include<iostream>
using namespace std;


void merge(int *arr, int s, int e){

    int mid = s + (e-s)/2;

    int len1 = mid-s+1; // size of array1 [left part]
    int len2 = e-mid; // size of array2 [Right part]

    // Dynamic Memory allocation
    int *first = new int[len1]; // array1
    int *second = new int[len2]; // array2

    // Copying values
    int mainArrayIndex = s;

    // Loop chalake values copy krte chalo
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++]; // copying array kaa kth element from start('s')
    }

    mainArrayIndex = mid+1;
    // Loop chalake values copy krte chalo
    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++]; // copying array kaa kth element from mid('mid+1')
    }

    // Merge kardo (merge 2 sorted arrays)

    int idx1 = 0;
    int idx2 = 0;
    mainArrayIndex = s;

    while(idx1 < len1 && idx2 < len2) {

        if(first[idx1] < second[idx2]){
            arr[mainArrayIndex++] = first[idx1++];
        }
         else
         {
            arr[mainArrayIndex++] = second[idx2++];
         }
    }

// Copying first wala as is (if its length will greater than '1')

    while(idx1 < len1){
        arr[mainArrayIndex++] = first[idx1++];
    }
// Copying second wala as is (if its length will greater than '2')
    while(idx2 < len2){
        arr[mainArrayIndex++] = second[idx2++];
    }

    // deleting unused memory to prevent memory leak (memory free)
    delete []first;
    delete []second;

}

void mergeSort(int *arr, int s, int e) {

    // base case
    if(s>=e){  // Pura array traverse kr chuke hai (s=e --> single element is already sorted)
        return;
    }

    int mid = s + (e-s)/2; // to overcome integer overflow here we are writing like this

    // Left part sort kar rahe hai
    mergeSort(arr, s, mid);

    //right part sort kar rahe hai
    mergeSort(arr, mid+1, e);

    // sort hone ke baad dono part ko merge kr dena
    merge(arr, s, e);
}


int main(){

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    mergeSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}

// Time complexity = O(NlogN) --> N = no of operations in each level of recurrence tree || logN = no of levels (N/2^K = 1)
// Space Complexity = O(N) // N = length of array