// problem: Lista
// id: 8624
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k, i, j, ans = 0;
    cin >> n >> k >> i >> j;

    if (i > k)
        ans = ((i - k + j - k) * (j - i + 1) / 2);
    else if (j <= k)
        ans = ((i - k + j - k + 2 * n) * (j - i + 1) / 2);
    else
        ans = ((i - k + 2 * n) * (k - i + 1) / 2) +
              ((j - k + 1) * (j - k) / 2);
    cout << ans;

    return 0;
}