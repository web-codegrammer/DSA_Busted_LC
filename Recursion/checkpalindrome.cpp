#include<iostream>
using namespace std;

bool checkPalindrome(string& str, int i){

    int n = str.length();

    // Base Case
    if(i > (n-i-1)){
        return true;
    }

    // Ekk case solve karlo
    if(str[i]!=str[n-i-1]){
        return false;
    } else
    // recusrsive call
    return checkPalindrome(str, i+1);

}


int main ()
{
    string name = "abcde";
    cout << endl;

    bool isPalindrome = checkPalindrome(name, 0);

    if(isPalindrome){
        cout << "Its a Palindrome" << endl;
    } else {
        cout << "Its not a Palindrome" << endl;
    }
    

    return 0;
}

// Above Ex is using One pointer --> i
// TC = O(string length)
// SC = O(1)