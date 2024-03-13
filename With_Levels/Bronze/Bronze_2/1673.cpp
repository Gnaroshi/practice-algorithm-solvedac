// problem: 치킨 쿠폰
// id: 1673
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    while (cin >> n >> k)
    {
        long long ans = n;
        while (n >= k)
        {
            ans += n / k;
            n = n / k + n % k;
        }
        cout << ans << '\n';
    }

    return 0;
}