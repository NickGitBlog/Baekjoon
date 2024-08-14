#include <iostream>

using namespace std;

int main()
{
	int a;
	char b[4];
	cin >> a >> b;

	cout << a * (b[2] - 0x30) << endl;
	cout << a * (b[1] - 0x30) << endl;
	cout << a * (b[0] - 0x30) << endl;
	cout << a * atoi(b);




}
