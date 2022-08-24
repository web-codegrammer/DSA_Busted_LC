#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]){

    // base case
    if(n == 0){
        return ;
    }

    // Processing
    int digit = n % 10;
    n = n/10;


    // Recursive Call
    sayDigit(n, arr);

    cout << arr[digit] << " ";

}

int main(){

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "Six", "Seven", "Eight", "nine"};

    int n;
    cin>>n;

    cout << endl << endl << endl;
    sayDigit(n, arr);

    cout << endl << endl << endl;

    return 0;
}