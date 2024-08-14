#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
	int n , m;
	cin >> n;
	vector<int> a(n);


	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	cin >> m;
	vector<int> b(m);
	b.resize(m);

	for (int j = 0; j < m; j++)
	{
		cin >> b[j];
	}

	//unordered_set<int> set_a(a.begin(), a.end());

	//for (int j = 0; j < m; j++)
	//{
	//	cout << (set_a.count(b[j] > 0)) << " ";
	//}
	//cout << endl;

	//return 0;

	
	int cnt = 0;
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			if (b[j] == a[i]) {
				cnt++;
			}
		}
		cout << cnt << " ";
		cnt = 0;
	} 
}