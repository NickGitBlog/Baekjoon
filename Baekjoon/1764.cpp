#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> arr(N + M), answer;
    for (int i = 0; i < N + M; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    for (int i = 0; i < N + M - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            answer.push_back(arr[i]);
            // Skip the next element to avoid counting it again
            i++;
        }
    }

    cout << answer.size() << endl;
    for (const string& s : answer)
        cout << s << endl;

    return 0;
}

