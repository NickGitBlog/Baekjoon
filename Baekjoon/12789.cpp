#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int cnt = 1;
	int line;
	int num;
	cin >> num;

	stack<int> s;
	
	while (num--)
	{
		cin >> line;
		if (line == cnt)
			cnt++;
		else
			s.push(line);
		while (!s.empty() && s.top() == cnt) {
			s.pop();
			cnt++;
		}
	}
	if (s.empty())
		cout << "Nice" << endl;
	else
		cout << "Sad" << endl;
}