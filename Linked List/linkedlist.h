#include "node.h"

class LinkedList {
public:
    Node* head;

    LinkedList();
    void insertAtFront(int data);
    bool isEmpty();
    int removeFromFront();
    void print();
    //bool searchInList(int key);
    Node* searchInList(int key);
    // HW: insertAtBack and removeFromBack
};
