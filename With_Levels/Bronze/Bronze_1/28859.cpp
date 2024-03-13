// problem: Капли
// id: 28859
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, k, ans = 0, p, a, b;
    cin >> n >> m >> k;
    a = k / m, b = k % m;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        ans += (m / p) * a + b / p;
    }
    cout << ans << '\n';

    return 0;
}