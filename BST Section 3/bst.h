#include "node.h"

class BST {
public:
    Node* root;

    BST();
    void insert(int key);
    void inorderTreeWalk(Node* x);
};
