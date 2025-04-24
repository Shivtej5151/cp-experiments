#include <iostream>
#define MAX 100

using namespace std;

class Stack {
private:
    int top;
    int arr[MAX];

public:
    Stack() { top = -1; }

    bool push(int x) {
        if (top >= (MAX - 1)) {
            cout << "Stack Overflow\n";
            return false;
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack\n";
            return true;
        }
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return 0;
        } else {
            int x = arr[top--];
            return x;
        }
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return 0;
        } else {
            return arr[top];
        }
    }

    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << stack.pop() << " popped from stack\n";

    cout << "Top element is " << stack.peek() << "\n";

    cout << "Stack is " << (stack.isEmpty() ? "empty" : "not empty") << "\n";

    return 0;
}