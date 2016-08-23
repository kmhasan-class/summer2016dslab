#include "heap.h"
#include <iostream>
using namespace std;

int main() {
    int X[] = {45, 23, 12, 45, 67, 23, 2, 12, -45, 34};
    Heap h;
    h.copyArray(X, 10);
    h.buildMaxHeap();
    h.print();
    return 0;
}
