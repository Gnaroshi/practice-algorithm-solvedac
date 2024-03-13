// problem: Telefon
// id: 14124
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll fn(ll n, ll m)
{
    string s = "";
    ll ret = 0, iter;
    while (n > 0)
    {
        s += char(n % m + '0');
        n /= m;
    }
    iter = s.length();
    for (int i = 1; i < iter; i++)
    {
        if (s[i] != s[i - 1])
            ret++;
    }
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, mx = 0x3f3f3f3f, ans = 10, t;
    cin >> n;
    for (int i = 10; i >= 2; i--)
    {
        t = fn(n, i);
        if (t < mx)
        {
            ans = i;
            mx = t;
        }
    }
    cout << ans;

    return 0;
}