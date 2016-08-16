#include "bst.h"
#include <iostream>
using namespace std;

int main() {
    BST tree;
    tree.treeInsert(15);
    tree.treeInsert(6);
    tree.treeInsert(20);

    Node* ret = tree.treeMaximum(tree.root);
    ret->print();
    return 0;
}
