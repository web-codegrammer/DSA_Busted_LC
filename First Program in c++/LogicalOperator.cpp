#include<iostream>
using namespace std;

int main () {
    int a = 10;
    int b = 0;
    int c = 15;

    // OR Op
    cout<<((a>5) || (b<10) || (c>=15));
    // AND Op
    cout <<((a>0) && (b!=0) && (c<=15));
    // NOT Op
    cout<<(!a)<<endl;
    cout<<(!b)<<endl; 
}