// problem: 네 수
// id: 10824
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solv(ll a, ll b)
{
    ll t = b;
    ll m = 1;
    while (t > 0)
    {
        t /= 10;
        m *= 10;
    }
    return a * m + b;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << solv(a, b) + solv(c, d);

    return 0;
}