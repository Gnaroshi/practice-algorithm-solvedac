#include <bits/stdc++.h>
using namespace std;

int dx[6] = {1, 0, 0, -1, 0, 0};
int dy[6] = {0, 1, 0, 0, -1, 0};
int dz[6] = {0, 0, 1, 0, 0, -1};
// l r c
// z x y
// k i j
char bld[32][32][32];
int dist[32][32][32];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int l, r, c;
        cin >> l >> r >> c;
        if (l + r + c == 0)
            return 0;

        for (int k = 0; k < l; k++)
        {
            for (int i = 0; i < r; i++)
            {
                fill(dist[k][i], dist[k][i] + c, -1);
            }
        }
        queue<tuple<int, int, int>> Q;
        int ex, ey, ez;
        string temp;
        for (int k = 0; k < l; k++)
        {
            for (int i = 0; i < r; i++)
            {
                cin >> temp;
                for (int j = 0; j < c; j++)
                {
                    bld[k][i][j] = temp[j];
                    if (temp[j] == 'S')
                    {
                        Q.push({k, i, j});
                        dist[k][i][j] = 0;
                    }
                    if (temp[j] == 'E')
                    {
                        ex = i;
                        ey = j;
                        ez = k;
                    }
                }
            }
        }

        bool isOut = false;
        while (!Q.empty())
        {
            auto cur = Q.front();
            Q.pop();
            int curX, curY, curZ;
            tie(curZ, curX, curY) = cur;
            if (curZ == ez && curX == ex && curY == ey)
            {
                cout << "Escaped in " << dist[curZ][curX][curY] << " minute(s).\n";
                isOut = true;
                break;
            }
            for (int dir = 0; dir < 6; dir++)
            {
                int nx = curX + dx[dir];
                int ny = curY + dy[dir];
                int nz = curZ + dz[dir];
                if (nx < 0 || nx >= r || ny < 0 || ny >= c || nz < 0 || nz >= l)
                    continue;
                if (dist[nz][nx][ny] != -1)
                    continue;
                if (bld[nz][nx][ny] == '#')
                    continue;
                dist[nz][nx][ny] = dist[curZ][curX][curY] + 1;
                Q.push({nz, nx, ny});
            }
        }
        if (!isOut)
            cout << "Trapped!\n";
    }
    return 0;
}