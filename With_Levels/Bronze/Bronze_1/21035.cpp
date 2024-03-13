// problem: Simple Operations in Matrix
// id: 21035
// time taken:
#include <bits/stdc++.h>
using namespace std;

int mt[51][51];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, q, t, v, s = 0, mn = 0x3f3f3f3f, mx = -0x3f3f3f3f;
    string st;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> mt[i][j];
    }
    cin >> q;
    while (q--)
    {
        cin >> st >> t >> v;
        if (st[0] == 'r')
        {
            for (int i = 1; i <= m; i++)
                mt[t][i] += v;
        }
        else
        {
            for (int i = 1; i <= n; i++)
                mt[i][t] += v;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            s += mt[i][j];
            mn = min(mn, mt[i][j]);
            mx = max(mx, mt[i][j]);
        }
    }
    cout << s << ' ' << mn << ' ' << mx << '\n';

    return 0;
}