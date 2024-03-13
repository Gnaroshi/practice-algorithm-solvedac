// problem: E1. Game with Marbles (Easy Version)
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, ans = 0;
        cin >> n;
        ll *a = new ll[n], *b = new ll[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        vector<ll> v(n);
        iota(v.begin(), v.end(), 0);
        sort(v.begin(), v.end(),
             [&](ll i, ll j)
             {
                 return a[i] + b[i] > a[j] + b[j];
             });
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
                ans -= b[v[i]] - 1;
            else
                ans += a[v[i]] - 1;
        }
        cout << ans << '\n';
    }

    return 0;
}
