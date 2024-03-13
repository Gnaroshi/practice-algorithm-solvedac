// problem: Stół
// id: 8246
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, k;
    cin >> a >> b >> k;

    if (a >= 2 * k && b >= 2 * k)
        cout << max((a / k) + (b - 2 * k) / k, (b / k) + (a - 2 * k) / k) * 2;
    else if (a >= 2 * k && b >= k)
        cout << a / k;
    else if (a >= k && b >= 2 * k)
        cout << b / k;
    else if (a >= k && b >= k)
        cout << 1;
    else
        cout << 0;

    return 0;
}