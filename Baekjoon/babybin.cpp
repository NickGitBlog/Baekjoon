#include <iostream>

using namespace std;

int num = 6;
int runcnt;
int tripletecnt;
int babybincnt;

void bubblesort(int* arr, int n)
{
	for (int k = 0; k < n - 1; k++) {
		for (int i = 0; i < n - 1 - k; i++) {
			if (arr[i] > arr[i + 1]) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
}

void isBabybin(int* arr, int n)
{
	//
	if (arr[0] == arr[1] && arr[1] == arr[2])
		runcnt++;
	if (arr[3] == arr[4] && arr[4] == arr[5])
		runcnt++;

	if (arr[0] + 1 == arr[1] && arr[1] + 1 == arr[2])
		tripletecnt++;
	if (arr[3] + 1 == arr[4] && arr[4] + 1 == arr[5])
		tripletecnt++;

	if (runcnt >= 1 && tripletecnt >= 1)
		babybincnt++;



}

int main()
{
	int arr[6];
	int j = 0, k = 0;
	int temp;

	cout << "6개의 숫자를 입력하시오 : ";
	for (; j < 6; j++)
		cin >> arr[j];

	for (; k < 6; k++)
		cout << " arr[" << k << "] : " << arr[k] << endl;

	bubblesort(arr, 6);

	cout << endl << "정렬된 배열" << endl;
	for (k = 0; k < 6; ++k)
		cout << " arr[" << k << "] : " << arr[k] << endl;

	isBabybin(arr, 6);

	if (runcnt == 1 && tripletecnt == 0)
		cout << "runcnt : 1 " << endl;
	else if (runcnt == 0 && tripletecnt == 1)
		cout << "tripletecnt : 1" << endl;
	else if (babybincnt >= 1)
		cout << "babybin :  SUCEESS" << endl;
	else
		cout << " Fail " << endl;



}
