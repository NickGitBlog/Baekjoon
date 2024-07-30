#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isBalanced(const string& str) {
    stack<char> s;

    for (char c : str) {
        if (c == '(' || c == '[') {
            s.push(c);
        }
        else if (c == ')' || c == ']') {
            if (s.empty()) {
                return false; // 닫는 괄호가 있지만 여는 괄호가 없음
            }
            char top = s.top();
            if ((c == ')' && top == '(') || (c == ']' && top == '[')) {
                s.pop(); // 짝이 맞으면 스택에서 제거
            }
            else {
                return false; // 짝이 맞지 않음
            }
        }
    }

    return s.empty(); // 스택이 비어 있으면 균형 잡힌 것
}

int main() {
    string str;

    while (true) {
        getline(cin, str); // 한 줄씩 입력받기

        if (str == ".") break; // 온점이 나오면 종료

        // 문자열의 마지막 온점을 제거
        if (!str.empty() && str.back() == '.') {
            str.pop_back();
        }

        // 균형 여부 출력
        if (isBalanced(str)) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }

    return 0;
}
