#include <bits/stdc++.h>
using namespace std;

int n, e;
const int INF = 0x3f3f3f3f;
int d[1000];
vector<pair<int, int>> adj[1000];

int dijkstra(int st, int en)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    fill(d, d + 1000, INF);
    d[st] = 0;
    pq.push({d[st], st});

    while (!pq.empty())
    {
        auto cur = pq.top();
        pq.pop();
        if (d[cur.second] != cur.first)
            continue;
        for (auto nxt : adj[cur.second])
        {
            if (d[nxt.second] > d[cur.second] + nxt.first)
            {
                d[nxt.second] = d[cur.second] + nxt.first;
                pq.push({d[nxt.second], nxt.second});
            }
        }
    }
    if (d[en] == INF)
        return -1;
    return d[en];
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({w, v});
        adj[v].push_back({w, u});
    }
    int st = 1;
    int v1, v2;
    cin >> v1 >> v2;

    int ans1 = 0;
    int ans2 = 0;
    int ans1_track[3] = {dijkstra(1, v1), dijkstra(v1, v2), dijkstra(v2, n)};
    int ans2_track[3] = {dijkstra(1, v2), dijkstra(v2, v1), dijkstra(v1, n)};

    bool ans1Ok = true;
    bool ans2Ok = true;
    for (int i = 0; i < 3; i++)
    {
        if (ans1_track[i] == -1)
        {
            ans1Ok = false;
        }
        if (ans2_track[i] == -1)
        {
            ans2Ok = false;
            // cout << i << '\n';
        }
    }
    if (ans1Ok)
    {
        ans1 += dijkstra(1, v1) + dijkstra(v1, v2) + dijkstra(v2, n);
    }
    else
        ans1 = INF;
    if (ans2Ok)
    {
        ans2 += dijkstra(1, v2) + dijkstra(v2, v1) + dijkstra(v1, n);
    }
    else
        ans2 = INF;

    // cout << "ans1: " << ans1 << " ans2: " << ans2 << '\n';
    if (ans1 == INF && ans2 == INF)
        cout << -1 << '\n';
    else
        cout << min(ans1, ans2) << '\n';

    return 0;
}