// problem: 쉬운 최단거리
// id: 14940
// time taken:
#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
int n, m, cx, cy;

int dst[1005][1005];
int brd[1005][1005];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        fill(dst[i], dst[i] + m, -1);
        for (int j = 0; j < m; j++)
        {
            cin >> brd[i][j];
            if (brd[i][j] == 2)
                cx = i, cy = j;
        }
    }
    queue<pair<int, int>> q;
    q.push({cx, cy});
    dst[cx][cy] = 0;
    while (!q.empty())
    {
        tie(cx, cy) = q.front();
        q.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cx + dx[dir];
            int ny = cy + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (dst[nx][ny] != -1 || brd[nx][ny] == 0)
                continue;
            dst[nx][ny] = dst[cx][cy] + 1;
            q.push({nx, ny});
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (brd[i][j] == 0)
                cout << 0;
            else
                cout << dst[i][j];
            cout << ((j != m - 1) ? ' ' : '\n');
        }
    }

    return 0;
}