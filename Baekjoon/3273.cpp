#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, k, target;
	cin >> n;

	vector<int> v;

	for (int i = 0; i < n; i++) {
		
		cin >> k;
		v.push_back(k);
	}
	cin >> target;
	sort(v.begin(), v.end());

	int l = 0, s = n - 1, cnt = 0;
	while (1)
	{
		if (l >= s)
			break;
		int sum = v[l] + v[s];
		if (sum == target) {
			cnt++;
			l++;
			s--;
		}
		else if (sum < target)
			l++;
		else
			s--;
	}
	cout << cnt << endl;
	return 0;
}
