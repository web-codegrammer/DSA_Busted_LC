#include<iostream>
using namespace std;

int main() {
    char a;
    cout<<"Enter the character/digit"<< a <<endl;
    cin >> a;

    if(a >='A' && a <= 'Z') {
        cout << "This is Uppercase character" << endl;
    }
    else if (a >='a' && a <= 'z')
    {
        cout << "This is Lowercase character" << endl;
    }
    else if (a >= '0' && a <= '9')
    {
        cout << "This is a Numeric digit" << endl;
    } 
    return 0;
}