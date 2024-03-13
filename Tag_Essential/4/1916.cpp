#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

const int MX_N = 1005;
const int INF = 0x3f3f3f3f;
int n, m;
int st, en;
int d[MX_N];
vector<pair<int, int>> adj[MX_N];
priority_queue<pair<int, int>,
               vector<pair<int, int>>,
               greater<pair<int, int>>>
    pq;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, c;
        cin >> u >> v >> c;
        adj[u].push_back({c, v});
    }

    cin >> st >> en;

    fill(d, d + n + 1, INF);
    d[st] = 0;

    pq.push({d[st], st});
    while (!pq.empty())
    {
        auto cur = pq.top();
        pq.pop();

        if (d[cur.Y] != cur.X)
            continue;

        for (auto nxt : adj[cur.Y])
        {
            if (d[nxt.Y] > d[cur.Y] + nxt.X)
            {
                d[nxt.Y] = d[cur.Y] + nxt.X;
                pq.push({d[nxt.Y], nxt.Y});
            }
        }
    }

    // for (int i = 1; i < n; i++)
    //     cout << d[i] << ' ';

    cout << d[en] << '\n';

    return 0;
}