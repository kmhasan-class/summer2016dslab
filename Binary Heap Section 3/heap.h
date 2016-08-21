class Heap {
public:
    const static int MAX_SIZE = 1000;
    int A[MAX_SIZE];
    int heapSize;
    int length;

    Heap();
    void buildMaxHeap();
    void maxHeapify(int i);
    int left(int i);
    int right(int i);
    int parent(int i);
    void copyArray(int B[], int numElements);
    void printHeap();
};
