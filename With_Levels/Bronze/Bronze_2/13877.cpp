// problem: 이건 무슨 진법이지?
// id: 13877
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll itoo(ll n)
{
    ll t = n, m = 1, ret = 0;
    while (t > 0)
    {
        if (t % 10 >= 8)
            return 0;
        ret += (t % 10) * m;
        t /= 10;
        m *= 8;
    }
    return ret;
}
ll itoh(ll n)
{
    ll t = n, m = 1, ret = 0;
    while (t > 0)
    {
        ret += (t % 10) * m;
        t /= 10;
        m *= 16;
    }
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll tcc, n;
        cin >> tcc >> n;
        cout << tcc << ' ' << itoo(n) << ' ' << n << ' ' << itoh(n) << '\n';
    }

    return 0;
}