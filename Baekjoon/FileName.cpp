#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	int n;
	cin >> n;

	map<string, char> m;
	string name, status;
	int cnt;

	for (int i = 0; i < n; i++) {
		cin >> name >> status;
		if (status == "enter") {
			m.insert({ name,cnt });
			cnt++;
		}
		if (status == "leave") {
			auto it = m.find(name);
			if (it != m.end()) {
				m.erase(name);
				cnt--;
			}
		}
	}

	for (const auto& entry : m) {
		cout << entry.first << " " << entry.second << endl;
	}
}