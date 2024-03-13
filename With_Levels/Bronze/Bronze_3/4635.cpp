// problem: Speed Limit
// id: 4635
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        int ans = 0;
        int re = 0;
        for (int i = 0; i < n; i++)
        {
            int s, t;
            cin >> s >> t;
            ans += (t - re) * s;
            re = t;
        }
        cout << ans << " miles\n";
    }

    return 0;
}