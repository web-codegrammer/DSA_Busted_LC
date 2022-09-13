#include<iostream>
using namespace std;

int Solution::solve(int A, int B) {

    int ans = 0;
    int p = 1;

    while(A>0){
        int digit = A % 10;
        A = A/10;

        ans+=digit*p;
        p=p*B;
    }
    return ans;
}

// TC = O(logA)
// SC = O(1)