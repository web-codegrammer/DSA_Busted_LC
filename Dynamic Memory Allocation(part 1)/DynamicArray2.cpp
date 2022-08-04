#include<iostream>
using namespace std;

int getSum(int* arr, int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum +=arr[i];
    }
    return sum;
}


int main ()

{
    int n;
    cin >> n;

    // Variable size array
    int* arr = new int[n];

    // taking i/p in array
    for(int i=0; i<n; i++)
    {
        cin >> arr[i]; // arr[i] = *(arr+i);
    }

    int ans = getSum(arr, n);
    cout << "Anser is " << ans << endl;

// Case 1
    while(true) {
        int i = 5;
    }
// Case 2
    while(true) {
        int *ptr = new int;
    }
    
    return 0;
}