#include "linkedlist.h"
#include <iostream>
using namespace std;

int main() {
    LinkedList list;
    list.insertAtFront(50);
    list.insertAtFront(51);
    list.insertAtFront(11);
    list.insertAtFront(61);
    list.insertAtFront(55);
    // HW: IMPLEMENT A removeFromFront METHOD
    list.print();
    return 0;
}
