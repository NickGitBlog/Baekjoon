#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, k;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		
	}
	sort(arr, arr+n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}

	delete[] arr;

	return 0;

}