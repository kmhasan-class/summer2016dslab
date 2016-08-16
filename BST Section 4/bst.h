#include "node.h"

class BST {
public:
    Node* root;

    BST();
    void treeInsert(int key);
    Node* treeMaximum(Node* x);
};
