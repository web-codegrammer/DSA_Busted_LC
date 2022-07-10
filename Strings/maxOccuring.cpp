#include<iostream>
using namespace std;

char getMaxOccuringChar(string s) {

    int arr[26] = {0};

    // Preparing array of count of characters
    for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        //lowercase
        int number = 0;
        number = ch -'a';
        arr[number]++;
    }
   
    // Finding max occuring character
    int maxi = -1, ans = 0;
    for(int i=0; i<26;i++) {
        if(maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }
    return ans + 'a';
}

int main () {

    string s;
    cin>>s;

    cout << getMaxOccuringChar(s) << endl;

    return 0;
}