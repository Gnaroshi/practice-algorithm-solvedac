#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    // int ans = 0;
    // while (true)
    // {
    //     if (ans >= m || ans * 2 >= n)
    //         break;
    //     ans++;
    // }
    // int r = n + m - ans * 2 - ans;
    // cout << ans << ' ' << r << '\n';
    // if (r < k)
    // {
    //     while (true)
    //     {
    //         if (r >= k)
    //             break;
    //         r += 3;
    //         ans--;
    //     }
    // }
    cout << min(min(n / 2, m), (n + m - k) / 3) << '\n';

    return 0;
}