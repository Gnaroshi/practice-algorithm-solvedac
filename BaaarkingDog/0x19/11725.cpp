#include <bits/stdc++.h>
using namespace std;

#define MX 100005

int n;
int prnt[MX];
vector<int> adj[MX];

//부모노드를 제외한 자식 노드를 재귀로 호출 -> dfs
void dfs(int cur)
{
    for (int nxt : adj[cur])
    {
        if (prnt[cur] == nxt)
            continue;
        prnt[nxt] = cur;
        dfs(nxt);
    }
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    int iter = n - 1;
    for (int i = 0; i < iter; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);

    for (int i = 2; i <= n; i++)
        cout << prnt[i] << '\n';

    return 0;
}