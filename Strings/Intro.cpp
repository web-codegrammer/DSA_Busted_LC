#include<iostream>
using namespace std;

char toLowerCase(char ch) {
    if(ch>='a' && ch <='z') {
        return ch;
    }
    else { //uppercase character
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n-1;

    while(s<e) {
        if(toLowerCase(a[s]) != toLowerCase(a[e])) { // Not case sensitive 
            return 0;
        }
        else {
            s++;
            e--;
        }
    }
    return 1;
}


void reverse(char name[], int n) {

    int s = 0;
    int e = n-1;

    while(s<e) {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]) {
    int count = 0;
    for(int i=0; name[i] != '\0'; i++) {
        // cout << name[i] << endl;
        count++;
    }
    return count;
}

int main () {

    char name[20];

    cout << "Enter your name: " << endl;
    cin >> name;
    // name[2] = '\0';

    cout << "Your Name is " << name << endl;

    int len = getLength(name);

    cout << "Length: " << len << endl;

    reverse(name, len );
    cout << "Your reversed Name is " << name << endl;

    cout << "Is your String a palindrome? " << checkPalindrome(name, len) << endl;

    cout << "Character is " << toLowerCase('b') << endl;
    cout << "Character is " << toLowerCase('C') << endl;

    return 0;
}