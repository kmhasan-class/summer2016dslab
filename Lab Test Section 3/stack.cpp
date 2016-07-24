#include "stack.h"

Stack::Stack() {
    top = 0;
}

void Stack::push(int data) {
    array[top] = data;
    top = top + 1;
}

int Stack::pop() {
    top = top - 1;
    return array[top];
}

int Stack::peek() {
    return array[top - 1];

}

bool Stack::isEmpty() {
    if (top == 0)
        return true;
    else return false;
}

void Stack::print() {
    // write code to print the contents of the array
    // Your code should not change the contents of the stack
}
