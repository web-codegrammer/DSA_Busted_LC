#include<iostream>
using namespace std;


int countParents(int input1, int input2, int input3[]) {

    int count = 0;

    int sub[input1];

    for(int i=0; i<input1; i++) {
        if(input3[i]!= -1) ++sub[input3[i]];
    }

    for(int i=0; i<input1; i++) {
        if(sub[i] >= input2) count++;
    }
    return count;
}


int main() {

    int input1 = 3;

    int input3[3] = {-1,0,0};

    int input2 = 1;

    cout << "ans is " << countParents(input1, input2, input3);
}