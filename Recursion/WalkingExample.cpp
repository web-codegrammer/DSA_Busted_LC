#include<iostream>
using namespace std;

void reachHome(int src, int dest) {
    cout << "Source " << src << " Destnination " << dest << endl;
    // base case
    if(src == dest) {
        cout << "phauch gya" << endl;
        return ;  // return stmt is mandatory in base case
    }
    
    // Processing - ek step aage bhad jaao
    src++;
    // recursive call
    reachHome(src, dest);
}

int main () {

    int dest = 10;
    int src = 1;

    cout << endl;

    reachHome(src, dest);

    return 0;
}