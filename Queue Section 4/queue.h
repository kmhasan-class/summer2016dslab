class Queue {
public:
    static const int MAXN = 50;
    int array[MAXN];
    int head;
    int tail;
    int numElements;

    Queue();
    void push(int data);
    int pop();
    int peek();
    bool isEmpty();
};


