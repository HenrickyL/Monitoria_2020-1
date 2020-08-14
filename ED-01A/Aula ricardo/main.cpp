#include <iostream>
#include "queue.h"

using namespace std;

int main() {
    queue<int> q(20);
    int x = 12345;
    while (x>0) {
        q.enqueue(x%10);
        x /= 10;
        cout << q.length(); 
    }
    while (!q.isEmpty()) {
        cout << q.get(Begin) << " ";
        q.deququq();
    }
    return 0;
}