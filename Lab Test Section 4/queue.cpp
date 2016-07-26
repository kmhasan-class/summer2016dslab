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

int Queue::sum() {
    // write code to print the sum of the elements in the array
    // Your code should not change the contents of the stack

    // replace the following line
    return 0;
}

