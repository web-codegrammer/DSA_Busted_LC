#include<iostream>
using namespace std;


int main () {
    
    // Q1
    /*
    int first = 8;
    int second = 18;
    int *ptr = &second;

    *ptr = 9;
    cout << first << " " << second << endl;
    */

    // Q2
    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << first <<  endl;

    // Q3
    // Refer to video for other/more ques
    Link : https://www.youtube.com/watch?v=P0UsAxtXq2Y&list=PLDzeHZWIZsTrPcYMwNqOWXTUanKrdZi1m&index=5&ab_channel=CodeHelp-byBabbar 

    return 0;
}