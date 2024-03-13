#include <bits/stdc++.h>
using namespace std;

#define MX 505
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n, m;
int ans = -1;
int board[MX][MX];
int vist[MX][MX];

void solv(int x, int y, int w, int cnt)
{
    if (cnt == 4)
    {
        ans = max(ans, w);
        return;
    }
    for (int dir = 0; dir < 4; dir++)
    {
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if (nx < 1 || nx > n || ny < 1 || ny > m)
            continue;
        if (vist[nx][ny])
            continue;
        vist[nx][ny] = 1;
        solv(nx, ny, board[nx][ny] + w, cnt + 1);
        vist[nx][ny] = 0;
    }
    if (x - 1 >= 1)
    {
        if (y - 1 >= 1)
        {
            if (x + 1 <= n)
                ans = max(ans, (board[x][y] + board[x - 1][y] + board[x][y - 1] + board[x + 1][y]));
            if (y + 1 <= m)
                ans = max(ans, (board[x][y] + board[x][y - 1] + board[x - 1][y] + board[x][y + 1]));
        }
    }
    if (x + 1 <= n)
    {
        if (y + 1 <= m)
        {
            if (x - 1 >= 1)
                ans = max(ans, (board[x][y] + board[x + 1][y] + board[x][y + 1] + board[x - 1][y]));
            if (y - 1 >= 1)
                ans = max(ans, (board[x][y] + board[x + 1][y] + board[x][y + 1] + board[x][y - 1]));
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> board[i][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            vist[i][j] = 1;
            solv(i, j, board[i][j], 1);
            vist[i][j] = 0;
        }
    cout << ans << '\n';

    return 0;
}