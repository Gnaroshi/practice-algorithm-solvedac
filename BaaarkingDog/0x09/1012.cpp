#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int m, n, k;
        cin >> m >> n >> k;
        int board[51][51];
        int vist[51][51];
        queue<pair<int, int>> Q1;
        queue<pair<int, int>> Q2;
        for (int i = 0; i < m; i++)
        {
            fill(board[i], board[i] + n, 0);
            fill(vist[i], vist[i] + n, -1);
        }
        int temp_a, temp_b;
        for (int i = 0; i < k; i++)
        {
            cin >> temp_a >> temp_b;
            Q1.push({temp_a, temp_b});
            board[temp_a][temp_b] = 1;
        }
        int cnt = 0;
        while (!Q1.empty())
        {
            auto cur1 = Q1.front();
            if (vist[cur1.X][cur1.Y] == -1)
                cnt++;
            Q2.push(cur1);
            while (!Q2.empty())
            {
                auto cur = Q2.front();
                Q2.pop();
                for (int dir = 0; dir < 4; dir++)
                {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx > m || ny < 0 || ny > n)
                        continue;
                    if (board[nx][ny] == 0)
                        continue;
                    if (vist[nx][ny] != -1)
                        continue;
                    vist[nx][ny] = 1;
                    Q2.push({nx, ny});
                }
            }
            Q1.pop();
        }
        cout << cnt << '\n';
    }

    return 0;
}