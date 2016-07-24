#include "queue.h"

Queue::Queue() {
    head = 0;
    tail = 0;
    numElements = 0;
}

void Queue::push(int data) {
    array[tail] = data;
    tail = tail + 1;
    numElements = numElements + 1;
    tail = tail % MAXN;
}

int Queue::pop() {
    int data = array[head];
    head = head + 1;
    head = head % MAXN;
    numElements = numElements - 1;
    return data;
}

bool Queue::isEmpty() {
    if (numElements == 0)
        return true;
    else return false;
}

int Queue::peek() {
    return array[head];
}

void Queue::print() {
    // write code to print the contents of the array
    // Your code should not change the contents of the stack
}

