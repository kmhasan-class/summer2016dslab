#include <iostream>
#include "queue.h"
using namespace std;

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    while (!q.isEmpty())
        cout << q.pop() << endl;

    return 0;
}
