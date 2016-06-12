/*
#include <stdio.h>

int main() {
    int x;
    double y;
    printf("Hello World\n");
    printf("Enter an integer and a floating point number\n");
    scanf("%d %lf", &x, &y);
    double z = x + y;
    printf("The result is %lf\n", z);
    return 0;
}
*/


#include <iostream>
using namespace std;

int main() {
    int n;
    int data;
    int min = 10000; // need to FIX this later
    cout << "Enter the number of data points" << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        if (data < min)
            min = data;
    }
    cout << "The minimum number is " << min << endl;
    return 0;
}

