#include <iostream>
#include "queue.h"
using namespace std;

int main() {
    Queue q;

    q.push(15);
    q.push(16);
    q.push(10);

    while (!q.isEmpty())
        cout << q.pop() << endl;

    return 0;
}
