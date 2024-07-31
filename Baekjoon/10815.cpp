#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n;
	int* arr_n = new int[n];

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr_n[i] = a;
	}

	cin >> m;
	int* arr_m = new int[m];

	for (int j = 0; j < m; j++) {
		int b;
		cin >> b;
		arr_m[j] = b;
	}

	int cnt = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (arr_m[i] == arr_n[j])
				cnt++;   //cout << "1" << " ";
		}
		if (cnt == 1) {
			cout << "1" << " ";
			cnt = 0;
		}
		else
			cout << "0" << " ";
	}

	delete arr_n;
	delete arr_m;

	return 0;
	
}