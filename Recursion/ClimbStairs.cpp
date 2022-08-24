#include<iostream>
using namespace std;

int countDistinctWays(int nStairs) {
    //  Write your code here.
    // base case
        if(nStairs<0)
            return 0;
        if(nStairs == 0)
            return 1;
    
    // RC
    return countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
}