#include "bst.h"
#include <cstdlib>

BST::BST() {
    root = NULL;
}

// Introduction to Algorithm (3rd edition) page 294
void BST::treeInsert(int key) {
    Node* z = new Node();
    z->key = key;

    // line 1-2
    Node* y = NULL;
    Node* x = root;

    // line 3-7
    while (x != NULL) {
        y = x;
        if (z->key < x->key)
            x = x->left;
        else x = x->right;
    }

    // line 8-13
    z->p = y;
    if (y == NULL)
        root = z;
    else if (z->key < y->key)
        y->left = z;
    else y->right = z;
}

Node* BST::treeMaximum(Node* x) {
    while (x->right != NULL)
        x = x->right;
    return x;
}
