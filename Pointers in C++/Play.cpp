#include<iostream>
using namespace std;

int main ()
{
    // int num = 5;
    // Pointer to int is created and pointing to garbage address in memory
    // int *p = 0; // Will give u "Segmentation falult" in console

    // cout << *p << endl;

/*
// Imp from MCQ point of view
    int i = 5;
    int *q = &i;

    cout << q << endl;
    cout << *q << endl;

    int *p = 0;
    p = &i;

    cout << p << endl;
    cout << *p << endl;

    */

    int num = 5;
    int a = num;
    a++;

    cout << num << endl;

    int *p = &num;
    cout << "before " << num << endl;

    (*p)++;
    cout << "after " << num << endl;

    // Copying a pointer
    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;

    // Important Concept - pointer arithemetic
    int i = 3;
    int *t = &i;
    // cout << (*t)++ << endl;

    *t = *t + 1;
    cout << *t << endl;

    cout << "Before t " << t << endl;
    t = t + 1;

    cout << "After t " << t << endl;


    return 0;
}