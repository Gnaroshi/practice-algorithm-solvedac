// problem: 말이 되고픈 원숭이
// id: 1600
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int MXD = 0x3f3f3f3f;

int dx[12] = {1, 0, -1, 0, 2, 1, -1, -2, -2, -1, 1, 2};
int dy[12] = {0, 1, 0, -1, 1, 2, 2, 1, -1, -2, -2, -1};
int brd[205][205];
int dst[35][205][205];
int k, w, h, ans = MXD;

queue<tuple<int, int, int>> q;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> k >> h >> w;
    for (int i = 0; i < w; i++)
        for (int j = 0; j < h; j++)
            cin >> brd[i][j];
    q.push({0, 0, 0});
    dst[0][0][0] = 1;
    while (!q.empty())
    {
        int cx, cy, ck;
        tie(ck, cx, cy) = q.front();
        q.pop();
        if (ck < k)
        {
            for (int dir = 4; dir < 12; dir++)
            {
                int nx = cx + dx[dir];
                int ny = cy + dy[dir];
                if (nx < 0 || nx >= w || ny < 0 || ny >= h)
                    continue;
                if (brd[nx][ny])
                    continue;
                if (dst[ck + 1][nx][ny])
                    continue;
                dst[ck + 1][nx][ny] = dst[ck][cx][cy] + 1;
                q.push({ck + 1, nx, ny});
            }
        }
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cx + dx[dir];
            int ny = cy + dy[dir];
            if (nx < 0 || nx >= w || ny < 0 || ny >= h)
                continue;
            if (brd[nx][ny])
                continue;
            if (dst[ck][nx][ny])
                continue;
            dst[ck][nx][ny] = dst[ck][cx][cy] + 1;
            q.push({ck, nx, ny});
        }
    }
    for (int i = 0; i <= k; i++)
    {
        if (dst[i][w - 1][h - 1] != 0)
            ans = min(ans, dst[i][w - 1][h - 1]);
    }
    if (ans == MXD)
        cout << -1;
    else
        cout << ans - 1;

    return 0;
}