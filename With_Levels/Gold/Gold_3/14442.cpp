// problem: 벽 부수고 이동하기 2
// id: 14442
// time taken:
#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
int dst[11][1005][1005];
int brd[1005][1005];
int n, m, k, ans = 0x3f3f3f3f;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
            brd[i][j] = s[j] - '0';
    }

    queue<tuple<int, int, int>> q;
    q.push({0, 0, 0});
    dst[0][0][0] = 1;
    while (!q.empty())
    {
        int cx, cy, ck;
        tie(ck, cx, cy) = q.front();
        q.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cx + dx[dir];
            int ny = cy + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (brd[nx][ny])
            {
                if (ck < k)
                {
                    if (dst[ck + 1][nx][ny] == 0)
                    {
                        dst[ck + 1][nx][ny] = dst[ck][cx][cy] + 1;
                        q.push({ck + 1, nx, ny});
                    }
                }
                else
                    continue;
            }
            else
            {
                if (dst[ck][nx][ny] == 0)
                {
                    dst[ck][nx][ny] = dst[ck][cx][cy] + 1;
                    q.push({ck, nx, ny});
                }
            }
        }
    }

    for (int i = 0; i <= k; i++)
        if (dst[i][n - 1][m - 1])
            ans = min(ans, dst[i][n - 1][m - 1]);
    if (ans == 0x3f3f3f3f)
        cout << -1;
    else
        cout << ans;

    return 0;
}