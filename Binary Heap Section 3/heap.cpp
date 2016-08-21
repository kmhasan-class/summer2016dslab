#include "heap.h"
#include <iostream>
using namespace std;

Heap::Heap() {
    heapSize = 0;
    length = 0;
}

int Heap::left(int i) {
    return i << 1;
}

int Heap::right(int i) {
    return (i << 1) + 1;
}

int Heap::parent(int i) {
    return i >> 1;
}

void Heap::copyArray(int B[], int numElements) {
    for (int i = 0; i < numElements; i++)
        A[i + 1] = B[i];
    length = numElements;
}

void Heap::maxHeapify(int i) {
    int l = left(i);
    int r = right(i);
    int largest;

    if (l <= heapSize && A[l] > A[i])
        largest = l;
    else largest = i;
    if (r <= heapSize && A[r] > A[largest])
        largest = r;
    if (largest != i) {
        int t = A[i];
        A[i] = A[largest];
        A[largest] = t;
        maxHeapify(largest);
    }
}

void Heap::buildMaxHeap() {
    heapSize = length;
    for (int i = length / 2; i >= 1; i--)
        maxHeapify(i);
}

void Heap::printHeap() {
    for (int i = 1; i <= heapSize; i++)
        cout << A[i] << endl;
}
