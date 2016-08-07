#include "linkedlist.h"
#include <cstdlib>

LinkedList::LinkedList() {
    head = NULL;
}

void LinkedList::insertAtFront(int data) {
    Node *n = new Node(data);
    n->next = head;
    head = n;
}

int LinkedList::removeFromFront() {
    int data = head->data;
    Node* t = head;
    head = head->next;
    delete t;
    return data;
}

bool LinkedList::isEmpty() {
    if (head == NULL)
        return true;
    else return false;
}

void LinkedList::print() {
    for (Node* n = head; n != NULL; n = n->next)
        n->print();
}

Node* LinkedList::searchInList(int key) {
    Node* address = NULL;
    for (Node* n = head; n != NULL; n = n->next)
        if (n->data == key) {
            address = n;
            // you can break/return from here
            // if you want to return the first place where you found the key
        }
    return address;
}

void LinkedList::insertAtBack(int data) {
    Node *z = new Node(data);
    Node *n;
    if (head == NULL) {
        head = z;
    } else {
        for (n = head; n->next != NULL; n = n->next)
            ;
        n->next = z;
    }
}
