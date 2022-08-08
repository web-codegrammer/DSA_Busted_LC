#include<iostream>
using namespace std;

int score = 15;


void a(int& i) {
    cout << i << endl;
    // b(i);
    score++;
    cout << score << "in a" << endl;
}

void b(int& i) {
    cout << i << endl;
    cout << score << "in b" << endl;
}


int main () 
{
   int i = 5;
   a(i);
   b(i);
   cout << score << "in main" << endl;
    return 0;
}