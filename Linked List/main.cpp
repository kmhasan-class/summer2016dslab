#include <iostream>
#include "node.h"
using namespace std;

int main() {
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
    return 0;
}

