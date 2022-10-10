#include<iostream>
using namespace std;

void sortArray(int *arr, int n){

    // base case
    // already sorted hai no need
    if(n==0 || n==1){
        return ;
    }

    // ek case solve kr lia - largest element ko end mai rakh dega
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    // Recursive call
    sortArray(arr, n-1);
}

int main(){

int arr[] = {2,5,1,6,9};

sortArray(arr,5);

for(int i=0; i<5; i++){
    // cout << " Array after sorting " << endl;
    cout <<  arr[i] << " ";
}


return 0;

}