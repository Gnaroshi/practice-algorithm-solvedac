// problem: Multiply
// id: 3232
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll getMX(ll a)
{
    ll t = 0;
    while (a > 0)
    {
        t = max(a % 10, t);
        a /= 10;
    }
    return t;
}

ll fn(ll t, int b)
{
    ll ret = 0, m = 1;
    while (t > 0)
    {
        ret += m * (t % 10);
        m *= b;
        t /= 10;
    }
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, ans;
    ll p, q, r, mx, tp, tq, tr;
    cin >> tc;
    while (tc--)
    {
        cin >> p >> q >> r;
        mx = getMX(p);
        mx = max(mx, getMX(q));
        mx = max(mx, getMX(r));
        ans = 0;
        for (int i = mx + 1; i < 17; i++)
        {
            tp = fn(p, i);
            tq = fn(q, i);
            tr = fn(r, i);
            if (tp * tq == tr)
            {
                ans = i;
                break;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}