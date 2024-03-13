// problem: 이항 계수 5
// id: 11439
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int SIZE = 4000005;
vector<ll> p;
vector<pair<ll, ll>> pc;
bool isp[SIZE];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    fill(isp, isp + SIZE, 1);
    for (int i = 2; i < SIZE; i++)
    {
        if (isp[i])
            p.push_back(i);
        for (auto j : p)
        {
            if (i * j > SIZE)
                break;
            isp[i * j] = 0;
            if (i % j == 0)
                break;
        }
    }

    ll n, k, m, ans = 1;
    cin >> n >> k >> m;
    for (auto i : p)
        for (ll j = i; j <= n; j *= i)
            pc.push_back({i, (n / j) - ((k / j) + ((n - k) / j))});

    for (auto i : pc)
    {
        ll t = 1, tm = i.first, c = i.second;
        while (c > 0)
        {
            t *= tm;
            t %= m;
            c--;
        }
        ans *= t;
        ans %= m;
    }
    cout << ans;

    return 0;
}