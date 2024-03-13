#include <bits/stdc++.h>
using namespace std;

#define MX 32005

int n, m;
vector<int> adj[MX];
int indeg[MX];

queue<int> q;
vector<int> ans;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        indeg[v]++;
    }

    for (int i = 1; i <= n; i++)
        if (indeg[i] == 0)
            q.push(i);

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        ans.push_back(cur);

        for (int nxt : adj[cur])
        {
            indeg[nxt]--;
            if (indeg[nxt] == 0)
                q.push(nxt);
        }
    }

    for (auto x : ans)
        cout << x << ' ';

    return 0;
}