#include<iostream>
using namespace std;

int& func(int a) {
    int num = a; // num and ans are local variables so bad practice
    int& ans = num;
    return ans;
}

void update1(int n) {
    n++;
}

void update2(int& n) { // 'n' is ref variable here
    n++;
}


int main ()

{
    /*
    int i = 5;

    // Create a ref varibale

    int &j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;

    cout << j << endl;
*/

int n = 5;

cout << "Before " << n << endl;
update2(n);
cout << "After " << n << endl;

func(n);

    return 0;
}