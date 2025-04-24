#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Stack class using linked list
class Stack {
private:
    Node* top; // Pointer to the top of the stack

public:
    // Constructor
    Stack() : top(nullptr) {}

    // Push operation
    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << value << " pushed onto the stack.\n";
    }

    // Pop operation
    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow! Cannot pop from an empty stack.\n";
            return -1; // Return -1 to indicate an error
        }
        Node* temp = top;
        int poppedValue = temp->data;
        top = top->next;
        delete temp;
        cout << poppedValue << " popped from the stack.\n";
        return poppedValue;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Destructor to clean up memory
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

// Main function to demonstrate stack operations
int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop(); // Attempt to pop from an empty stack

    return 0;
}