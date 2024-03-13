// problem: Тарифы
// id: 22188
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll c[101], t[101], p[101], d[101];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> c[i] >> t[i] >> p[i];
    for (int i = 0; i < m; i++)
        cin >> d[i];

    ll mn = 0xffffffff;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll cur = c[i] * 100, cl;
        for (int j = 0; j < m; j++)
        {
            cl = (d[j] + t[i] - 1) / t[i] - (d[j] < t[i]);
            cur += cl * p[i];
        }
        if (mn > cur)
        {
            mn = cur;
            ans = i;
        }
    }
    cout << ans + 1;

    return 0;
}
