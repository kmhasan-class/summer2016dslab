#include <iostream>
using namespace std;

int main() {
    // STATIC MEMORY
    short x = 15;
    short *y = &x;
    cout << x << endl;

    *y = 14;
    cout << *y << endl;
    cout << x << endl;

    cout << y << endl;
    y = y + 1;
    cout << y << endl;

    // DYNAMIC MEMORY ALLOCATION
    // ALLOCATES MEMORY FROM THE "HEAP"

    int a[100];
    int n;
    cout << "Enter the maximum number of elements you want to store" << endl;
    cin >> n;
    int *b = new int[n];
    a[0] = 10;
    b[0] = 11;

    cout << "Size of a " << sizeof(a) << endl;
    cout << "Size of b " << sizeof(b) << endl;
    delete b;

    // C++ new/delete
    // C malloc/free

    return 0;
}
