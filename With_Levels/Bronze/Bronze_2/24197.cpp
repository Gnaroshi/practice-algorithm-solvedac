// problem: Tabbtabbande
// id: 24197
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, bef = 1, ans = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int t, ta, tb;
        cin >> t;
        ta = (t - bef) % n;
        if (ta <= 0)
            ta += n;
        tb = (bef - t) % n;
        if (tb <= 0)
            tb += n;
        ans += min(ta, tb);
        bef = t;
    }
    cout << ans;

    return 0;
}