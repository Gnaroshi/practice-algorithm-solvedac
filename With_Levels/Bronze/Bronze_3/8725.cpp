// problem: Szachy
// id: 8725
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0, n, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int mx = -1;
        for (int j = 0; j < n; j++)
        {
            cin >> t;
            mx = max(mx, t);
        }
        if (mx > 0)
            ans += mx;
    }
    cout << ans;

    return 0;
}