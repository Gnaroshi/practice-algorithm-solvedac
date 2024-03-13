#include <bits/stdc++.h>
using namespace std;

#define MX 10005

int n;
vector<pair<int, int>> adj[MX];
pair<int, int> x, y, z;
int ans = 0;

pair<int, int> find_most_far_node(int nd)
{
    int mx_dist = -1;
    int mx_dist_node = nd;
    queue<int> q;
    int dist[MX];
    bool vist[MX];
    fill(dist, dist + MX, -1);
    fill(vist, vist + MX, false);

    q.push(nd);
    vist[nd] = 1;
    dist[nd] = 0;
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        for (auto nxt : adj[cur])
        {
            if (!vist[nxt.second])
            {
                q.push(nxt.second);
                dist[nxt.second] = dist[cur] + nxt.first;
                vist[nxt.second] = true;
            }
        }
    }
    for (int i = 1; i <= n; i++)
        if (mx_dist < dist[i])
        {
            mx_dist = dist[i];
            mx_dist_node = i;
        }

    // cout << "-------------------\n";
    // for (int i = 1; i < n + 1; i++)
    // {
    //     cout << i << ' ' << dist[i] << '\n';
    // }
    // cout << "-------------------\n";
    // cout << mx_dist_node << ' ' << mx_dist << '\n';

    return {mx_dist_node, mx_dist};
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({w, v});
        adj[v].push_back({w, u});
    }

    //임의의 정점 x를 1로 설정
    x = {1, 0};
    y = find_most_far_node(x.first);
    z = find_most_far_node(y.first);
    ans = z.second;

    cout << ans << '\n';

    return 0;
}