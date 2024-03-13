// problem: 割り勘
// id: 22380
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int m, n, d;
        cin >> n >> m;
        if (m == 0 && n == 0)
            break;
        d = m / n;
        int ans = 0;
        int t;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            ans += min(t, d);
        }
        cout << ans << '\n';
    }
    return 0;
}