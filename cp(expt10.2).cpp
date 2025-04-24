#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    cout << "Removing elements from the queue:" << endl;
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}
