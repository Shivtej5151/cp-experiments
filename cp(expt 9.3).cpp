#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isBalanced(const string& str) {
    stack<char> s;
    for (char ch : str) {
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty()) return false;
            char top = s.top();
            s.pop();
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    string input;
    cout << "Enter a string of brackets: ";
    cin >> input;

    if (isBalanced(input)) {
        cout << "The brackets are balanced.\n";
    } else {
        cout << "The brackets are not balanced.\n";
    }

    return 0;
}