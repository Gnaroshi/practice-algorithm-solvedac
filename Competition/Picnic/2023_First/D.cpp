// problem: D번 - 육회비빔밥
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k, mx = -1;
    cin >> n >> k;
    vector<ll> a(n), b(n), c(n);
    vector<ll> p(n);
    iota(p.begin(), p.end(), 0);

    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    for (auto &i : c)
        cin >> i;

    do
    {
        ll cc = c[p[0]], ct = p[0], ab = 0;
        bool chk = true;
        for (int i = 1; i < n; i++)
        {
            if (cc * c[p[i]] <= k)
                ab += a[ct] * b[p[i]];
            else
            {
                chk = false;
                break;
            }
            cc = c[p[i]];
            ct = p[i];
        }
        mx = max(mx, ab * chk);
    } while (next_permutation(p.begin(), p.end()));

    if (mx)
        cout << mx << '\n';
    else
        cout << -1;

    return 0;
}