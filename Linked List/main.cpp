#include <iostream>
#include "linkedlist.h"
using namespace std;

int main() {
/*
    Node s(15);
    Node t(16, &s);
    Node u(17, &t);
    //s.print();
    //t.print();
    //u.print();

    // modify this method to search the nodes
    // to see if 18 is present
    for (Node *n = &u; n != NULL; n = n->next)
        n->print();

    bool found = false;
    int key = 12;
    for (Node *n = &u; n != NULL && !found; n = n->next)
        if (n->data == key) {
            found = true;
        }
    if (found)
        cout << "We found " << key << endl;
    else cout << "We did not find " << key << endl;
    */

    LinkedList list;
    list.insertAtFront(4);
    list.insertAtFront(15);
    list.insertAtFront(6);
    list.insertAtFront(3);
    list.insertAtBack(9);
    list.print();
//    while (!list.isEmpty())
//        cout << list.removeFromFront() << endl;
    return 0;
}

