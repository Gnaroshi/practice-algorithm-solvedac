#include <bits/stdc++.h>
using namespace std;

#define MX 1002

int n, m;
int board[MX][MX];
int vist[MX];
int ans = 0;

void dfs(int st_node)
{
    vist[st_node] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (board[st_node][i] == 1 && vist[i] == 0)
        {
            dfs(i);
        }
    }
}

void dfs_all()
{
    for (int i = 1; i <= n; i++)
    {
        if (vist[i] == 0)
        {
            dfs(i);
            ans++;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        board[u][v] = 1;
        board[v][u] = 1;
    }

    fill(vist, vist + n, 0);
    dfs_all();
    cout << ans << '\n';

    return 0;
}