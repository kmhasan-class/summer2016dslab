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

    cout << myStack.sum() << endl;

    // Create another new stack "newStack" that has half the
    // number of elements compared to "myStack"

    // Every pair of elements from myStack need to be summed up
    // and inserted into newStack. After the operations myStack
    // should retain its original entries. You're not supposed
    // to do manual insertions. You can assume that myStack
    // will have even number of elements

    // For the given sample newStack should contain 50 and 50

    // You cannot access the "array" in the stack directly
    // You can only call push, pop, peek, isEmpty as required

    // Feel free to bring in extra stacks and queues as needed
    // You can also write a method to make a copy of a stack, if you want to

    return 0;
}
