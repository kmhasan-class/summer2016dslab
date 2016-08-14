#include "bst.h"
#include <cstdlib>

BST::BST() {
    root = NULL;
}

void BST::insert(int key) {
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

    // line 8
    z->p = y;

    // line 9-13
    if (y == NULL)
        root = z;
    else if (z->key < y->key)
        y->left = z;
    else y->right = z;
}

void BST::inorderTreeWalk(Node* x) {
    if (x != NULL) {
        inorderTreeWalk(x->left);
        x->print();
        inorderTreeWalk(x->right);
    }
}
