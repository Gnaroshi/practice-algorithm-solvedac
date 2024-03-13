// problem:
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, r;
    cin >> n >> r;
    ll ans = 0;
    ll t = n - r;
    for (int i = 1; i <= sqrt(t); i++)
    {
        if (t % i == 0)
        {
            if (n % i == r)
            {
                ans += i;
            }
            if (i != t / i)
            {
                if (n % (t / i) == r)
                    ans += t / i;
            }
        }
    }
    cout << ans;

    return 0;
}