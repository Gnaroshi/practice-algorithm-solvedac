#include <bits/stdc++.h>
using namespace std;

#define MX 1005

int n, m;
bool vis[MX];
vector<int> adj[MX];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
            continue;
        cnt++;
        queue<int> q;
        q.push(i);
        vis[i] = true;
        while (!q.empty())
        {
            int cur = q.front();
            q.pop();
            for (auto nxt : adj[cur])
            {
                if (vis[nxt])
                    continue;
                q.push(nxt);
                vis[nxt] = true;
            }
        }
    }

    cout << cnt << '\n';

    return 0;
}