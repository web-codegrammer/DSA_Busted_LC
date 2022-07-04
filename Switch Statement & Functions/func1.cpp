//   1st Function
#include<iostream>
using namespace std;

int power() {
    int num1, num2;
    cin >> num1 >> num2;

    int ans = 1;

    for(int i = 1; i<=num2; i++) {
        ans = ans * num1;
    }
    return ans;
}

int main () {

    // pow(a,b)

    /*
    int a, b; // main ke local variables
    cin >> a >> b;

    int answer = power(a,b);

    cout << "Anser is :" << answer << endl;

    int c, d;
    cin >> c >> d;

    answer = power(c,d);

    cout << "Anser is :" << answer << endl;
    */
    int ans = power();
    cout << "Answer is :" << ans << endl;  
    return 0;
}
