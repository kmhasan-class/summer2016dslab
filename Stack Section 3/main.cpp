#include <iostream>
using namespace std;

class Stack {
public:
    int array[100];
    int top;

    // Constructor
    Stack() {
        top = 0;
    }

    void push(int data) {
        array[top] = data;
        top = top + 1;
    }

    int pop() {
        top = top - 1;
        return array[top];
    }

    int peek() {
        return array[top - 1];
    }

    bool isEmpty() {
        /*
        if (top == 0)
            return true;
        else return false;
        */
        return top == 0;
    }

};

int main() {
    Stack s;
    s.push(2);
    s.push(4);
    s.push(5);
    cout << s.peek()  << endl;

    // use FOR loop instead of WHILE loop
    while (!s.isEmpty())
        cout << s.pop() << endl;
    return 0;
}
