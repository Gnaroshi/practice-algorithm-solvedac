// problem: E번 - Spell Cards
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;

    ll ans = 0;
    while (v.size() != 1)
    {
        ll mx = LONG_LONG_MAX, de = -1, c, d;
        int iter = v.size(), loc = 0, tg = 0;
        for (int i = 1; i < iter; i++)
        {
            c = abs(v[i - 1] - v[i]);
            d = min(v[i - 1], v[i]);
            if (c < mx && d >= de)
            {
                loc = i;
                mx = c;
                de = d;
                if (v[i - 1] < v[i])
                    tg = i - 1;
                else
                    tg = i;
            }
        }
        ans += v[loc - 1] + v[loc];
        v.erase(v.begin() + tg);
    }
    cout << ans;

    return 0;
}