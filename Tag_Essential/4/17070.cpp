#include <bits/stdc++.h>
using namespace std;

#define MX 20

int n;
int board[MX][MX];
int dx[3] = {0, 1, 1};
int dy[3] = {1, 0, 1};
int cnt;

void dfs(int x, int y, int dir)
{
    if (x == n && y == n)
    {
        cnt++;
        return;
    }

    for (int i = 0; i < 3; i++)
    {
        if (dir == 0 && i == 1)
            continue;
        else if (dir == 1 && i == 0)
            continue;

        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 1 || nx > n || ny < 1 || ny > n)
            continue;
        if (board[nx][ny] == 1)
            continue;
        if (i == 2)
        {
            if (board[x + 1][y] == 1 || board[x][y + 1] == 1)
                continue;
        }
        dfs(nx, ny, i);
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> board[i][j];
    cnt = 0;
    dfs(1, 2, 0);
    cout << cnt << '\n';

    return 0;
}