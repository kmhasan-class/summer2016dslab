class Stack {
public:
    const static int MAXN = 100;
    int array[MAXN];
    int top;

    Stack();
    void push(int data);
    int pop();
    int peek();
    bool isEmpty();
    void print();
};


