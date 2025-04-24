#include <iostream>
#include <deque>

using namespace std;

class Deque {
private:
    deque<int> dq;

public:
    // Enqueue at the front
    void enqueueFront(int value) {
        dq.push_front(value);
        cout << "Enqueued " << value << " at the front.\n";
    }

    void enqueueBack(int value) {
        dq.push_back(value);
        cout << "Enqueued " << value << " at the back.\n";
    }
    void dequeueFront() {
        if (dq.empty()) {
            cout << "Deque is empty. Cannot dequeue from the front.\n";
            return;
        }
        int value = dq.front();
        dq.pop_front();
        cout << "Dequeued " << value << " from the front.\n";
    }
    void dequeueBack() {
        if (dq.empty()) {
            cout << "Deque is empty. Cannot dequeue from the back.\n";
            return;
        }
        int value = dq.back();
        dq.pop_back();
        cout << "Dequeued " << value << " from the back.\n";
    }
    void display() const {
        if (dq.empty()) {
            cout << "Deque is empty.\n";
            return;
        }
        cout << "Deque contents: ";
        for (int value : dq) {
            cout << value << " ";
        }
        cout << "\n";
    }
};

int main() {
    Deque deque;

    deque.enqueueFront(10);
    deque.enqueueBack(20);
    deque.enqueueFront(5);
    deque.display();

    deque.dequeueFront();
    deque.display();

    deque.dequeueBack();
    deque.display();

    deque.dequeueFront();
    deque.dequeueFront(); 

    return 0;
}