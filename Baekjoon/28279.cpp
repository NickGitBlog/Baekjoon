#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    vector<int> v;
    int n;

    for (int i = 0; i < 5; i++)
    {

        sort(v.begin(), v.end());

    int mid = v[2];

    int sum = accumulate(v.begin(), v.end(), 0);
    int average = sum / 5;  

    cout << average << endl;
    cout << mid << endl;

    return 0;
}
