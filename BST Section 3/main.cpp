#include "bst.h"
#include <iostream>
using namespace std;

int main() {
    BST tree;
    tree.insert(10);
    tree.insert(6);
    tree.insert(26);
    tree.insert(16);
    tree.insert(61);
    tree.inorderTreeWalk(tree.root);
    return 0;
}
