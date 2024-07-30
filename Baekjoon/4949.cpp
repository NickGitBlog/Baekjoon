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
                return false; // �ݴ� ��ȣ�� ������ ���� ��ȣ�� ����
            }
            char top = s.top();
            if ((c == ')' && top == '(') || (c == ']' && top == '[')) {
                s.pop(); // ¦�� ������ ���ÿ��� ����
            }
            else {
                return false; // ¦�� ���� ����
            }
        }
    }

    return s.empty(); // ������ ��� ������ ���� ���� ��
}

int main() {
    string str;

    while (true) {
        getline(cin, str); // �� �پ� �Է¹ޱ�

        if (str == ".") break; // ������ ������ ����

        // ���ڿ��� ������ ������ ����
        if (!str.empty() && str.back() == '.') {
            str.pop_back();
        }

        // ���� ���� ���
        if (isBalanced(str)) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }

    return 0;
}
