// problem: Кампус
// id: 20454
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k, x, y, q, t, a, b;
    cin >> n >> k >> x >> y >> q;
    a = (n / k) * x + (n - n / k) * y;
    b = (k - 1) * y + x;
    while (q--)
    {
        cin >> t;
        t = (t - 1) % a;
        cout << t / b * k + min((t % b) / y, k - 1) + 1 << '\n';
    }

    return 0;
}