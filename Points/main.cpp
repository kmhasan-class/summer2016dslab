#include <iostream>
#include <cmath>
using namespace std;

class Point {
public:
    double x;
    double y;

    // DEFAULT CONSTRUCTOR
    Point() {
        x = 10;
        y = 20;
    }

    // CONSTRUCTOR
    Point(double newx, double newy) {
        x = newx;
        y = newy;
    }

    void translate(double h, double k) {
        x = x + h;
        y = y + k;
    }

    // ADD A METHOD FOR
    void rotate(double angle) {
        double rad = angle * 180; // THIS IS WRONG
        double nx, ny;
        nx = x * cos(rad) - y * sin(rad);
        ny = x * sin(rad) + y * cos(rad);
        x = nx;
        y = ny;
    }

    void print() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    int n = 3;
    Point points[n];
    double h = 1;
    double k = 2;

    points[0].x = 4;
    points[0].y = 2;
    points[1].x = 5;
    points[1].y = 1;
    points[2].x = 6;
    points[2].y = 3;

    for (int i = 0; i < n; i++)
        points[i].translate(h, k);
    //  points[i].rotate(30);

    for (int i = 0; i < n; i++)
        points[i].print();

/*
    double x[3];
    x[0] = 4;
    x[1] = 5;
    x[2] = 6;
    double y[] = {2, 1, 3};

    double h = 1;
    double k = 2;
    int n = 3;

    for (int i = 0; i < n; i++) {
        x[i] = x[i] + h;
        y[i] = y[i] + k;
    }
    */
/*
    double p1x = 4, p1y = 2;
    double p2x = 5, p2y = 1;
    double p3x = 6, p3y = 3;

    double h = 1;
    double k = 2;

    p1x = p1x + h;
    p1y = p1y + k;
    p2x = p2x + h;
    p2y = p2y + k;
    p3x = p3x + h;
    p3y = p3y + k;
*/
    return 0;
}
