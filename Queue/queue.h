class Queue {
public:
    const static int MAXN = 100;

    int array[MAXN];
    int head;
    int tail;
    int numElements;

    Queue();
    void push(int data);
    int pop();
    bool isEmpty();
    int peek();
};


