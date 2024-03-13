#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int w, h;
char bld[1001][1001];
int dist1[1001][1001];
int dist2[1001][1001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> h >> w;
        queue<pair<int, int>> Q1;
        queue<pair<int, int>> Q2;
        for (int i = 0; i < w; i++)
        {
            fill(dist1[i], dist1[i] + h, -1);
            fill(dist2[i], dist2[i] + h, -1);
        }
        for (int i = 0; i < w; i++)
        {
            string temp;
            cin >> temp;
            for (int j = 0; j < h; j++)
            {
                bld[i][j] = temp[j];
                if (bld[i][j] == '*')
                {
                    Q1.push({i, j});
                    dist1[i][j] = 0;
                }
                if (bld[i][j] == '@')
                {
                    Q2.push({i, j});
                    dist2[i][j] = 0;
                }
            }
        }

        // fire
        while (!Q1.empty())
        {
            auto cur = Q1.front();
            Q1.pop();
            for (int dir = 0; dir < 4; dir++)
            {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if (nx < 0 || nx >= w || ny < 0 || ny >= h)
                    continue;
                if (dist1[nx][ny] >= 0 || bld[nx][ny] == '#')
                    continue;
                dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
                Q1.push({nx, ny});
            }
        }

        // sangeun
        bool isOut = false;
        while (!Q2.empty())
        {
            auto cur = Q2.front();
            Q2.pop();
            for (int dir = 0; dir < 4; dir++)
            {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if (nx < 0 || nx >= w || ny < 0 || ny >= h)
                {
                    cout << dist2[cur.X][cur.Y] + 1 << '\n';
                    isOut = true;
                    break;
                }
                if (dist2[nx][ny] >= 0 || bld[nx][ny] == '#')
                    continue;
                if (dist1[nx][ny] != -1)
                {
                    if (dist1[nx][ny] <= dist2[cur.X][cur.Y] + 1)
                        continue;
                }
                dist2[nx][ny] = dist2[cur.X][cur.Y] + 1;
                Q2.push({nx, ny});
            }
            if (isOut)
                break;
        }
        if (!isOut)
            cout << "IMPOSSIBLE\n";
    }
    return 0;
}
