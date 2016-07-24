#include "stack.h"
#include "queue.h"
#include <iostream>
using namespace std;

int main() {
    // We have a stack called myStack which contains the elements 10, 40, 20 and 30
    Stack myStack;
    myStack.push(10);
    myStack.push(40);
    myStack.push(20);
    myStack.push(30);

    myStack.print();

    // Create another stack that has the same contents as this stack
    // the contents of myStack should remain the same after the operations

    // You cannot access the "array" in the stack directly
    // You can only call push, pop, peek, isEmpty as required

    // Feel free to bring in extra stacks and queues as needed
    // You can also write a method to make a copy of a stack, if you want to

    return 0;
}
