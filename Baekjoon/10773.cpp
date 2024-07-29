#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int k;
	cin >> k;

	int num;
	int sum = 0;
	stack<int> s;

	for (int i = 0; i < k; i++) {
		cin >> num;
		if (num != 0)
			s.push(num);
		else {
			if (!s.empty())
				s.pop();
		}
	}
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	cout << sum << endl;
}