#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, m, st, en;
const int INF = 0x3f3f3f3f;
const int MX_V = 20005;
int d[MX_V];
int pre[MX_V];
vector<pair<int, int>> adj[MX_V];
priority_queue<pair<int, int>,
               vector<pair<int, int>>,
               greater<pair<int, int>>>
    pq;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    fill(d, d + n + 1, INF);

    for (int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({w, v});
    }

    cin >> st >> en;
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
            if (d[nxt.Y] <= d[cur.Y] + nxt.X)
                continue;

            d[nxt.Y] = d[cur.Y] + nxt.X;
            pq.push({d[nxt.Y], nxt.Y});
            pre[nxt.Y] = cur.Y;
        }
    }

    // stack을 사용하면 메모리 초과, vector와 reverse()을 이용
    vector<int> bus_log;
    int iter = en;
    while (iter != st)
    {
        bus_log.push_back(iter);
        iter = pre[iter];
    }
    bus_log.push_back(st);
    cout << d[en] << '\n'
         << bus_log.size() << '\n';
    reverse(bus_log.begin(), bus_log.end());
    for (auto cur : bus_log)
        cout << cur << ' ';

    return 0;
}