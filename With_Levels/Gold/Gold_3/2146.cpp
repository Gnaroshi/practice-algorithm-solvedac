// problem: 다리 만들기
// id: 2146
// time taken:
#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, ans = 0x3f3f3f3f, lab = 1;
int brd[101][101], dst[101][101];
bool vst[101][101];

queue<pair<int, int>> q;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> brd[i][j];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!brd[i][j] || vst[i][j])
                continue;
            q.push({i, j});
            vst[i][j] = 1;
            brd[i][j] = ++lab;
            while (!q.empty())
            {
                auto cur = q.front();
                q.pop();
                for (int dir = 0; dir < 4; dir++)
                {
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                        continue;
                    if (!brd[nx][ny] || vst[nx][ny])
                        continue;
                    brd[nx][ny] = lab;
                    vst[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (brd[i][j])
            {
                for (int i = 0; i < n; i++)
                    fill(dst[i], dst[i] + n, -1);

                q.push({i, j});
                dst[i][j] = 0;
                while (!q.empty())
                {
                    auto cur = q.front();
                    q.pop();
                    for (int dir = 0; dir < 4; dir++)
                    {
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];
                        if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                            continue;
                        if (dst[nx][ny] != -1 || brd[i][j] == brd[nx][ny])
                            continue;
                        if (brd[nx][ny] && brd[i][j] != brd[nx][ny])
                        {
                            ans = min(ans, dst[cur.first][cur.second]);
                            while (!q.empty())
                                q.pop();
                        }
                        dst[nx][ny] = dst[cur.first][cur.second] + 1;
                        q.push({nx, ny});
                    }
                }
            }
        }
    }
    cout << ans;

    return 0;
}