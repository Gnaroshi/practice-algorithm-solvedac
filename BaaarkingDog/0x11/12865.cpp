#include <bits/stdc++.h>
using namespace std;

#define MX 105
#define ll long long

int n, k;
ll v[MX];
ll w[MX];
ll d[MX][100001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> w[i] >> v[i];

    for (int i = 0; i <= k; i++)
        d[0][i] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            // cout << "i: " << i << " j: " << j << '\n';
            if (w[i] > j)
                d[i][j] = d[i - 1][j];
            else
            {
                d[i][j] = max(d[i - 1][j], v[i] + d[i - 1][j - w[i]]);
            }
        }
    }
    cout << d[n][k] << '\n';

    return 0;
}