#include <iostream>
using namespace std;

int main() {
    int x = 10;
    x = 11;
    char y = 'B';
    double z = 1.345;
    char *str = "Hello";

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    int* px = &x;
    char* py = &y;
    double* pz = &z;

    *px = 999;
    *pz = 3.14159;
    cout << x << " " << *px << endl;
    cout << y << endl;
    cout << z << endl;

    cout << px << endl;
    cout << py << endl;
    cout << pz << endl;

    str = str + 1;
    cout <<"Printing string " << str << endl;

    cout << px << endl;
    px = px + 1;
    cout << px << endl;

    cout << "Size of double " << sizeof(double) << " bytes" << endl;
    cout << "Size of int* " << sizeof(int*) << " bytes" << endl;
    cout << "Size of short* " << sizeof(short*) << " bytes" << endl;
    cout << "Size of double* " << sizeof(double*) << " bytes" << endl;
    return 0;
}
