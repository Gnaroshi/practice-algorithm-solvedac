#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int vist[101][101];
int area[101];
deque<pair<int, int>> Q;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n, k;
    cin >> m >> n >> k;
    for (int i = 0; i < m; i++)
    {
        fill(vist[i], vist[i] + n, -1);
    }
    fill(area, area + k, 0);
    for (int i = 0; i < k; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int ii = y1; ii < y2; ii++)
        {
            for (int jj = x1; jj < x2; jj++)
            {
                vist[ii][jj] = 0;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vist[i][j] == -1)
                Q.push_back({i, j});
        }
    }

    int cnt = 0;
    while (!Q.empty())
    {
        auto cur = Q.front();
        Q.pop_front();
        if (vist[cur.X][cur.Y] == -1)
            cnt++;
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx > m || ny < 0 || ny > n)
                continue;
            if (vist[nx][ny] != -1)
                continue;
            vist[nx][ny] = 0;
            area[cnt - 1]++;
            Q.push_front({nx, ny});
        }
    }
    cout << cnt << '\n';
    sort(area, area + cnt);
    if (cnt == 0)
    {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < cnt; i++)
    {
        if (area[i] == 0)
            cout << area[i] + 1 << " ";
        else
            cout << area[i] << " ";
    }

    return 0;
}