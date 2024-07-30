#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string str;
        cin >> str;

        stack<char> s;
        bool isVPS = true;

        for (char c : str) {
            if (c == '(') {
                s.push(c);
            }
            else if (c == ')') {
                if (s.empty()) {
                    isVPS = false;
                    break;
                }
                else {
                    s.pop();
                }
            }
        }

        if (!s.empty()) {
            isVPS = false;
        }

        cout << (isVPS ? "YES" : "NO") << endl;
    }

    return 0;
}
