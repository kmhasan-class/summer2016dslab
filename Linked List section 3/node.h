class Node {
public:
    int data;
    Node *next;

    Node();
    Node(int d);
    Node(int d, Node *n);
    void print();
};
