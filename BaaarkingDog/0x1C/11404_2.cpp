#include <bits/stdc++.h>
using namespace std;

#define MX_N 105
const int INF = 0x3f3f3f3f;

int n, m;
int ml_table[MX_N][MX_N];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        fill(ml_table[i], ml_table[i] + n + 1, INF);

    for (int i = 0; i < m; i++)
    {
        int u, v, c;
        cin >> u >> v >> c;
        ml_table[u][v] = min(c, ml_table[u][v]);
    }

    for (int i = 1; i <= n; i++)
        ml_table[i][i] = 0;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (int k = 1; k <= n; k++)
                ml_table[j][k] = min(ml_table[j][k], ml_table[j][i] + ml_table[i][k]);

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

    return 0;
}
