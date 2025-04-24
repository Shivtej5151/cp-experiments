#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int n, num;

    cout << "Enter the number of integers: ";
    cin >> n;

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        q.push(num);
    }
    int size = 0;
    queue<int> temp = q;
    while (!temp.empty()) {
        ++size;
        temp.pop();
    }

    cout << "The size of the queue is: " << size << endl;

    return 0;
}