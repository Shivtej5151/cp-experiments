#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

char leftmostRepeatingChar(const string &str) {
    unordered_map<char, int> charCount;
    for (char ch : str) {
        charCount[ch]++;
    }
    for (char ch : str) {
        if (charCount[ch] > 1) {
            return ch;
        }
    }
    return '\0'; 
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    char result = leftmostRepeatingChar(input);
    if (result != '\0') {
        cout << "Leftmost repeating character: " << result << endl;
    } else {
        cout << "No repeating characters found." << endl;
    }

    return 0;
}