// problem: Knockout Racing
// id: 10598
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, x, y, t;
    cin >> n >> m;
    vector<pair<int, int>> v(n);
    for (auto &i : v)
        cin >> i.first >> i.second;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y >> t;
        int cur, ans = 0, td;
        for (auto i : v)
        {
            td = (i.second - i.first) * 2;
            cur = min(i.first + t % (td), td + i.first - t % (td));
            if (cur >= x && cur <= y)
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}