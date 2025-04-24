#include <iostream>
#include <string>
using namespace std;

bool isSubsequence(const string &str1, const string &str2) {
    int i = 0, j = 0;
    while (i < str1.size() && j < str2.size()) {
        if (str1[i] == str2[j]) {
            j++;
        }
        i++;
    }
    return j == str2.size();
}

int main() {
    string str1, str2;
    cout << "Enter string 1: ";
    cin >> str1;
    cout << "Enter string 2: ";
    cin >> str2;

    if (isSubsequence(str1, str2)) {
        cout << "String 2 is a subsequence of String 1." << endl;
    } else {
        cout << "String 2 is NOT a subsequence of String 1." << endl;
    }

    return 0;
}