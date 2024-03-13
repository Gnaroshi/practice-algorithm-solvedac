// problem: 여름나기
// id: 18130
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, q, p, k, c, mn = LLONG_MAX, mnl = -1, t;
    cin >> n >> q;
    q--;
    for (int i = 1; i <= n; i++)
    {
        cin >> p >> k >> c;
        t = p + c * (q / k) * (q / k + 1) / 2;
        if (t < mn)
        {
            mn = t;
            mnl = i;
        }
    }
    cout << mnl << ' ' << mn << '\n';

    return 0;
}