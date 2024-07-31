#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(const string& a, const string& b) {
    if (a.length() == b.length())
        return a < b;
    else
        return a.length() < b.length();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<string> w(n);

    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }

    sort(w.begin(), w.end(), compare);

    // 중복된 단어를 제거하며 출력
    string last = "";
    for (int j = 0; j < n; j++) {
        if (w[j] != last) {
            cout << w[j] << endl;
            last = w[j];
        }
    }

    return 0;
}
