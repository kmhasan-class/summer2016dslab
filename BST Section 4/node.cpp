#include "node.h"
#include <cstdlib>
#include <iostream>
using namespace std;

Node::Node() {
    p = NULL;
    left = NULL;
    right = NULL;
}

void Node::print() {
    cout << key << endl;
}
