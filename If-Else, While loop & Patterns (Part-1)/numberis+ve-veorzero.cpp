#include<iostream>
using namespace std;

int main() {
    // If-else-if code
    int a;
    cout<< "Enter the value of a: "<<endl;
    cin>>a;

    if(a>0) {
            cout<< "A is positive"<<endl;
        }
    else if (a<0)
    {
        cout << "A is negative"<<endl; 
    }
    else {
        cout << "A is 0"<<endl;
    }
    
}