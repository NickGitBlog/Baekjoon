#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;					// ��� ��
	int k;					// �� �޴� ����� 

	cin >> n >> k;

	vector<int> score(n);   // ����

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