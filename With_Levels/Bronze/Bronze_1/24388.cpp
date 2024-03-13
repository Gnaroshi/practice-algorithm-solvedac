// problem: РАМКА
// id: 24388
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, k, ans;
    cin >> a >> b >> k;
    ans = (a / k + b / k) * 2;
    if ((a % k == b % k) && a % k == 0)
        ;
    else if ((a % k + b % k) * 2 <= k)
        ans++;
    else if (a % k + b % k <= k)
        ans += 2;
    else if (max(a % k, b % k) * 2 <= k)
        ans += 2;
    else if (min(a % k, b % k) * 2 > k)
        ans += 4;
    else
        ans += 3;
    cout << ans << '\n';

    return 0;
}