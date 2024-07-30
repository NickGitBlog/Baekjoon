#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num, x;
    cin >> num;
    string command;
    queue<int> q;
    string result; 

    while (num--) {
        cin >> command;
        if (command == "push") {
            cin >> x;
            q.push(x);
        }
        else if (command == "pop") {
            if (!q.empty()) {
                result += to_string(q.front()) + '\n';
                q.pop();
            }
            else {
                result += "-1\n"; 
            }
        }
        else if (command == "size") {
            result += to_string(q.size()) + '\n'; 
        }
        else if (command == "empty") {
            result += (q.empty() ? "1\n" : "0\n"); 
        }
        else if (command == "front") {
            if (q.empty()) {
                result += "-1\n"; 
            }
            else {
                result += to_string(q.front()) + '\n'; 
            }
        }
        else if (command == "back") {
            if (q.empty()) {
                result += "-1\n"; 
            }
            else {
                result += to_string(q.back()) + '\n'; 
            }
        }
    }

    cout << result; 

    return 0;
}
