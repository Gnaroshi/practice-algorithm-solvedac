#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int v, e, st;
const int INF = 0x3f3f3f3f;
const int MX_V = 20005;
int d[MX_V];
vector<pair<int, int>> adj[MX_V];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> v >> e >> st;
    fill(d, d + v + 1, INF);
    d[st] = 0;

    for (int i = 1; i <= e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({w, v});
    }

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

    for (int i = 1; i <= v; i++)
    {
        if (d[i] == INF)
            cout << "INF" << '\n';
        else
            cout << d[i] << '\n';
    }

    return 0;
}