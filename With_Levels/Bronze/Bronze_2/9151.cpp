// problem: Starship Hakodate-maru
// id: 9151
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll fa[151201];
ll fb[151201];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (ll i = 0; i < 151200; i++)
        fa[i] = i * i * i;
    for (ll i = 0; i < 151200; i++)
        fb[i] = i * (i + 1) * (i + 2) / 6;

    while (true)
    {
        ll n;
        cin >> n;
        if (!n)
            break;
        ll dif = 0xffffffff;
        ll ans = 0;
        for (int i = 0; i < 151200; i++)
        {
            if (fa[i] > n)
                break;
            for (int j = 0; j < 151200; j++)
            {
                if (fb[j] > n)
                    break;
                ll t = fa[i] + fb[j];
                if (t > n)
                    break;
                if (t <= n && (n - t) >= 0 && (n - t) < dif)
                {
                    dif = n - t;
                    ans = t;
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}