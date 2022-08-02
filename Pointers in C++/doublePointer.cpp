#include<iostream>
using namespace std;

void update(int **p2) // Pass by Value ke tarike se aaya hai
{
     p2 = p2+1;
    // kuch change hoga ?? - NO

      *p2 = *p2 + 1;
    // kuch change hoga ?? - YES

     **p2 = **p2 + 1;
    // kuch change hoga ?? - YES
}


int main () {
    
int i = 8;
int *p = &i;
int **p2 = &p;

cout << endl << endl << "Sab Sahi Chal Raha hai" << endl << endl;

cout << " Printing p " << p << endl; // p ka content
// cout << " Printing p adress " << &p << endl;

cout << *p2 << endl; // p = *p2

// Printing i

cout << endl << endl;
cout << " Before " << i << endl;
cout << " Before " << p << endl;
cout << " Before " << p2 << endl;
update(p2);
cout << " After " << i << endl;
cout << " After " << p  << endl;
cout << " After " << p2 << endl;

    return 0;
}