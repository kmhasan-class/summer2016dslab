#include <cstdlib>
#include <iostream>
#include "node.h"
using namespace std;

Node::Node() {
    data = 100;
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
