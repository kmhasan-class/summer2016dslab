#include "queue.h"

Queue::Queue() {
    head = 0;
    tail = 0;
    numElements = 0;
}

void Queue::push(int data) {
    array[tail] = data;
    tail = tail + 1;
    //if (tail == 100)
    //    tail = 0;
    tail = tail % MAXN;
    numElements = numElements + 1;
}

int Queue::pop() {
    int data = array[head];
    head = head + 1;
    head = head % MAXN;
    numElements = numElements - 1;
    return data;
}

int Queue::peek() {
    return array[head];
}

bool Queue::isEmpty() {
    if (numElements == 0)
        return true;
    else return false;

    //return numElements == 0;
}
