#include "node.h"
#include <cstdlib>
#include <iostream>
using namespace std;

Node::Node() {
    data = 0;
    next = NULL;
}

Node::Node(int d) {
    data = d;
    next = NULL;
}

Node::Node(int d, Node *n) {
    data = d;
    next = n;
}

void Node::print() {
    cout << data << endl;
}
