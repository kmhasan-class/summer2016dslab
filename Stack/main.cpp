#include <iostream>
using namespace std;

class Stack {
public:
    int array[100];
    int top;

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
        // ADD YOUR CODE HERE
        // ADDING A NEW COMMENT
        // ONE MORE LINE
    }

    bool isEmpty() {
        if (top == 0)
            return true;
        else return false;
    }
};

int main() {
    Stack s;
    s.push(4);
    s.push(5);
    cout << s.peek() << endl;
    s.push(3);
    while (!s.isEmpty())
        cout << s.pop() << endl;
    return 0;
}
