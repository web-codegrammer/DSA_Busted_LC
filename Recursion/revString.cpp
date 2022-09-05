#include<iostream>
using namespace std;

void reverse(string& str, int i, int j){ // pass by reference

cout << "Call recieved for " << str << endl;

    // base case
    if(i>j)
        return ;

    // ek case sambhal lena hai
    swap(str[i], str[j]);
    i++;
    j--;

    // Recursive call
    reverse(str,i,j);
}


int main ()
{
    string name = "abcde";
    cout << endl;
    reverse(name, 0, name.length()-1);
    cout << endl;
    cout <<  "Reversed String is: " << name << endl;

    return 0;
}

// NOTE: Solveed using one pointer in codestudio
https://www.codingninjas.com/codestudio/problems/reverse-the-string_799927?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_13 