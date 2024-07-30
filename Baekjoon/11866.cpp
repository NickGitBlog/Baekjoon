#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    queue<int> q;

    // 1���� n���� ť�� ����
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    cout << "<";
    while (q.size())
    {
        for (int j = 0; j < k; j++) {
            if (j == k - 1) {
                cout << q.front();
                q.pop();
                if (q.size() > 0) {
                    cout << ", ";
                }
            }
            else {
                int temp = q.front();
                q.pop();
                q.push(temp);
            }
        }
    }
    cout << ">" << endl;
}
