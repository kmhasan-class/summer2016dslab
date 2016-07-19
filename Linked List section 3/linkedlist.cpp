#include "linkedlist.h"
#include <cstdlib>

LinkedList::LinkedList() {
    head = NULL;
}

void LinkedList::insertAtFront(int data) {
    Node *newnode = new Node(data);
    newnode->next = head;
    head = newnode;
}

void LinkedList::print() {
    for (Node* i = head; i != NULL; i = i->next)
        i->print();
}
