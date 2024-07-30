#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

bool map[50][50];
bool visited[50][50];
int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };
int M, N;

void dfs(int x, int y) {
    visited[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
            if (map[nx][ny] == 1 && !visited[nx][ny]) {
                dfs(nx, ny);
            }
        }
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        cin >> M >> N;
        int K;
        cin >> K;

        memset(map, 0, sizeof(map));
        memset(visited, false, sizeof(visited));

        for (int i = 0; i < K; i++) {
            int x, y;
            cin >> x >> y;
            map[x][y] = 1;
        }

        int cnt = 0;
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (map[i][j] == 1 && !visited[i][j]) {
                    dfs(i, j);
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
