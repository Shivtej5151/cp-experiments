#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

int evaluatePostfix(const string &expression) {
    stack<int> s;

    for (char ch : expression) {
        if (isdigit(ch)) {
            s.push(ch - '0'); // Convert char to int
        } else {
            int operand2 = s.top(); s.pop();
            int operand1 = s.top(); s.pop();

            switch (ch) {
                case '+': s.push(operand1 + operand2); break;
                case '-': s.push(operand1 - operand2); break;
                case '*': s.push(operand1 * operand2); break;
                case '/': s.push(operand1 / operand2); break;
                case '^': s.push(pow(operand1, operand2)); break;
                default: 
                    cerr << "Invalid operator: " << ch << endl;
                    return -1;
            }
        }
    }

    return s.top();
}

int main() {
    string postfixExpression;
    cout << "Enter a postfix expression: ";
    cin >> postfixExpression;

    int result = evaluatePostfix(postfixExpression);
    cout << "Result: " << result << endl;

    return 0;
}