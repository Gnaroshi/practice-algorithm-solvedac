// problem: 빙산
// id: 2573
// time taken:
#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m, ans, ic;
int ba[305][305], bb[305][305];
bool vst[305][305];

void bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    vst[x][y] = 1;

    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int cx = cur.first + dx[dir];
            int cy = cur.second + dy[dir];
            if (cx < 0 || cx >= n || cy < 0 || cy >= m)
                continue;
            if (!vst[cx][cy] && ba[cx][cy])
            {
                vst[cx][cy] = 1;
                q.push({cx, cy});
            }
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> ba[i][j];

    while (true)
    {
        ic = 0;
        for (int i = 0; i < n; i++)
            fill(vst[i], vst[i] + m, 0);
        for (int i = 0; i < n; i++)
            fill(bb[i], bb[i] + m, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (ba[i][j] && !vst[i][j])
                {
                    ic++;
                    bfs(i, j);
                }
            }
        }

        if (ic >= 2)
        {
            cout << ans;
            break;
        }
        if (ic == 0)
        {
            cout << 0;
            break;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (ba[i][j])
                {
                    int t = 0;
                    for (int dir = 0; dir < 4; dir++)
                        t += (ba[i + dx[dir]][j + dy[dir]] == 0);
                    bb[i][j] = max(ba[i][j] - t, 0);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                ba[i][j] = bb[i][j];
        }
        ans++;
    }

    return 0;
}