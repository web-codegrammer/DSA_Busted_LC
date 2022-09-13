#include<iostream>
using namespace std;

int Solution::solve(int A, int B) {

    int ans = 0;
    int p = 1;

    while(A>0){
        int digit = A % B;
        A = A/B;

        ans+=digit*p;
        p=p*10;
    }
    return ans;
}

// TC = O(logA)
// SC = O(1)