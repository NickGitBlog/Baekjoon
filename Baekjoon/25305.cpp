#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;					// 사람 수
	int k;					// 상 받는 사람수 

	cin >> n >> k;

	vector<int> score(n);   // 점수

	for (int j = 0; j < n; j++) {
		cin >> score[j];
	}

	for (int j = 0; j < n - 1; j++) {
		for (int i = 0; i < n - j - 1; i++) {
			if (score[i] < score[i + 1]) {
				int temp = score[i];
				score[i] = score[i + 1];
				score[i + 1] = temp;
			}
		}
	}

	int cutline = score[k - 1];
	cout << score[k - 1];
}