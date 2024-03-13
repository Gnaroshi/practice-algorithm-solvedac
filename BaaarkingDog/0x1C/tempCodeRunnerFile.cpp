#include <bits/stdc++.h>
using namespace std;

#define MX_N 105
const int INF = 0x3f3f3f3f;

int n, m;
int ml_table[MX_N][MX_N];
int nxt_table[MX_N][MX_N];

int main(void)
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        fill(ml_table[i], ml_table[i] + n + 1, INF);

    for (int i = 0; i < m; i++)
    {
        int u, v, c;
        cin >> u >> v >> c;
        ml_table[u][v] = min(c, ml_table[u][v]);
        nxt_table[u][v] = v;
    }

    for (int i = 1; i <= n; i++)
        ml_table[i][i] = 0;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (int k = 1; k <= n; k++)
            {
                // int temp = ml_table[j][k];
                // ml_table[j][k] = min(ml_table[j][k], ml_table[j][i] + ml_table[i][k]);
                // if (temp != ml_table[j][k])
                // {
                //     nxt_table[j][k] = nxt_table[j][i];
                // }
                if (ml_table[j][i] + ml_table[i][k] < ml_table[j][k])
                {
                    ml_table[j][k] = min(ml_table[j][k], ml_table[j][i] + ml_table[i][k]);
                    nxt_table[j][k] = nxt_table[i][k];
                }
            }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //         cout << nxt_table[i][j] << ' ';
    //     cout << '\n';
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (ml_table[i][j] == INF)
                cout << 0 << ' ';
            else
                cout << ml_table[i][j] << ' ';
        }
        cout << '\n';
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (ml_table[i][j] == INF || ml_table[i][j] == 0)
                cout << 0 << '\n';
            else
            {
                queue<int> q;
                // i to j
                int iter = i;
                while (true)
                {
                    if (iter == j)
                    {
                        q.push(iter);
                        break;
                    }
                    q.push(iter);
                    iter = nxt_table[iter][j];
                }
                cout << q.size() << ' ';
                while (!q.empty())
                {
                    int cur = q.front();
                    cout << cur << ' ';
                    q.pop();
                }
                cout << '\n';
            }
        }
    }

    return 0;
}
