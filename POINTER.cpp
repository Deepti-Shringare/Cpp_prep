#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *p = &a;
    int **q = &p;

    cout << *p << endl;     // value of a
    cout << **q << endl;   // value of a
    cout << p << endl;     // address of a
    cout << *q << endl;    // address of a

    return 0;
}
