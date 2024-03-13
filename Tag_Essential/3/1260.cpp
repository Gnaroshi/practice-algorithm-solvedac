#include <bits/stdc++.h>
using namespace std;

#define MX 1002

int n, m, v;
int board[MX][MX];
bool vist[MX];

void dfs(int st)
{
    cout << st << " ";
    for (int i = 1; i <= n; i++)
    {
        int nxt = board[st][i];
        if (nxt != 0 && !vist[i])
        {
            vist[i] = true;
            dfs(i);
        }
    }
}

queue<int> Q;
void bfs(int st)
{
    Q.push(st);
    while (!Q.empty())
    {
        st = Q.front();
        Q.pop();
        cout << st << " ";
        for (int i = 1; i <= n; i++)
        {
            int nxt = board[st][i];
            if (nxt != 0 && !vist[i])
            {
                Q.push(i);
                vist[i] = 1;
            }
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m >> v;

    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        board[x][y] = 1;
        board[y][x] = 1;
    }

    // dfs
    fill(vist, vist + MX, false);
    vist[v] = 1;
    dfs(v);
    cout << '\n';

    // bfs
    fill(vist, vist + MX, false);
    vist[v] = 1;
    bfs(v);

    return 0;
}
