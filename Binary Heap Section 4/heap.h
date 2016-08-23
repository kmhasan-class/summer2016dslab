class Heap {
public:
    const static int MAX_SIZE = 1000;
    int A[MAX_SIZE];
    int heapSize;
    int length;

    Heap();

    int parent(int i);
    int left(int i);
    int right(int i);

    void maxHeapify(int i);
    void buildMaxHeap();

    void print();
    void copyArray(int B[], int numElements);
};
