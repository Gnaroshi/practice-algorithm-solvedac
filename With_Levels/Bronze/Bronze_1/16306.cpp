// problem: Cardboard Container
// id: 16306
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, ans, sq, t = 1, mn = 10e12;
    cin >> n;
    sq = ll(sqrt(n)) + 1;
    for (ll i = 1; i < sq; i++)
    {
        for (ll j = 1; j < sq; j++)
        {
            t = n / (i * j);
            if (n % (i * j) == 0)
                mn = min(mn, 2 * (i * j + j * t + t * i));
        }
    }
    cout << mn;

    return 0;
}