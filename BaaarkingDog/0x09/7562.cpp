#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int l;
        cin >> l;
        int ngtx, ngty, ngtnx, ngtny;
        cin >> ngtx >> ngty >> ngtnx >> ngtny;
        int dist[301][301];
        for (int i = 0; i < l; i++)
        {
            fill(dist[i], dist[i] + l, -1);
        }
        queue<pair<int, int>> Q;
        dist[ngtx][ngty] = 0;
        Q.push({ngtx, ngty});

        while (!Q.empty())
        {
            auto cur = Q.front();
            Q.pop();
            if (cur.X == ngtnx && cur.Y == ngtny)
            {
                cout << dist[cur.X][cur.Y] << '\n';
                break;
            }
            for (int dir = 0; dir < 8; dir++)
            {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];

                if (nx < 0 || nx > l || ny < 0 || ny > l)
                    continue;
                if (dist[nx][ny] != -1)
                    continue;
                dist[nx][ny] = dist[cur.X][cur.Y] + 1;
                Q.push({nx, ny});
            }
        }
    }

    return 0;
}