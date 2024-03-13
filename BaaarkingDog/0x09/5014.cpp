#include <bits/stdc++.h>
using namespace std;

int dx[2] = {0, 0};
int dist[1000002];
int vist[1000002];

int main(void)
{
    int f, s, g, u, d;
    cin >> f >> s >> g >> u >> d;
    queue<int> Q;
    fill(vist, vist + f + 1, -1);
    fill(dist, dist + f + 1, -1);

    Q.push(s);
    vist[s] = 0;
    dist[s] = 0;
    dx[0] = u;
    dx[1] = d * -1;
    while (!Q.empty())
    {
        auto cur = Q.front();
        if (cur == g)
        {
            cout << dist[g] << '\n';
            return 0;
        }
        Q.pop();
        for (int dir = 0; dir < 2; dir++)
        {
            int nx = cur + dx[dir];
            if (nx < 1 || nx > f)
                continue;
            if (vist[nx] != -1)
                continue;
            vist[nx] = 0;
            dist[nx] = dist[cur] + 1;
            Q.push(nx);
        }
    }
    cout << "use the stairs\n";
    return 0;
}