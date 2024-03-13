#include <bits/stdc++.h>
using namespace std;

int n, m, h;
int tomatoes[103][103][103];
int dist[103][103][103];
int dx[6] = {1, 0, 0, -1, 0, 0};
int dy[6] = {0, 1, 0, 0, -1, 0};
int dz[6] = {0, 0, 1, 0, 0, -1};

queue<tuple<int, int, int>> Q;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> m >> n >> h;
    for (int k = 0; k < h; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int temp;
                cin >> temp;
                tomatoes[i][j][k] = temp;
                if (temp == 1)
                    Q.push({i, j, k});

                if (temp == 0)
                    dist[i][j][k] = -1;
            }
        }
    }

    // cout << '\n';
    // for (int k = 0; k < h; k++)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < m; j++)
    //         {
    //             cout << tomatoes[i][j][k] << " ";
    //         }
    //         cout << '\n';
    //     }
    //     cout << '\n';
    // }

    while (!Q.empty())
    {
        auto cur = Q.front();
        Q.pop();
        int curX = get<0>(cur);
        int curY = get<1>(cur);
        int curZ = get<2>(cur);
        for (int dir = 0; dir < 6; dir++)
        {
            int nx = curX + dx[dir];
            int ny = curY + dy[dir];
            int nz = curZ + dz[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m || nz < 0 || nz >= h)
                continue;
            if (dist[nx][ny][nz] >= 0)
                continue;
            dist[nx][ny][nz] = dist[curX][curY][curZ] + 1;
            Q.push({nx, ny, nz});
        }
    }
    int days = 0;
    for (int k = 0; k < h; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (dist[i][j][k] == -1)
                {
                    cout << -1 << '\n';
                    return 0;
                }
                days = max(days, dist[i][j][k]);
            }
        }
    }

    cout << days << '\n';
    return 0;
}