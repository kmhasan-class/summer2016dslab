#include "heap.h"
#include <iostream>
using namespace std;

int main() {
    int B[] = {23, 54, 12, 45, 34, 12, 34, 12, 5, 42};
    Heap heap;
    heap.copyArray(B, 10);
    heap.buildMaxHeap();
    heap.printHeap();
    return 0;
}
