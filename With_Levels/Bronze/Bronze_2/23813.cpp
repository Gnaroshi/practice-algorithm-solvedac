// problem: 회전
// id: 23813
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, ans = 0, d = 1;
    cin >> n;
    int l = to_string(n).length();
    for (int i = 1; i < l; i++)
        d *= 10;
    for (int i = 0; i < l; i++)
    {
        ans += n;
        ll t = n / d + (n % d) * 10;
        n = t;
    }
    cout << ans;

    return 0;
}