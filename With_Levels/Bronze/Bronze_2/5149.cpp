// problem: Map Interface
// id: 5149
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Data Set " << tcc << ":\n";
        int n, m, x, y, ax, ay, bx, by, t, ans = 0;
        cin >> n >> m;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            v.emplace_back(x, y);
        }
        cin >> t;
        auto cur = v[t - 1];
        ax = cur.first;
        ay = cur.second;
        bx = cur.first;
        by = cur.second;
        for (int i = 1; i < m; i++)
        {
            cin >> t;
            auto cur = v[t - 1];
            ax = min(ax, cur.first);
            ay = min(ay, cur.second);
            bx = max(bx, cur.first);
            by = max(by, cur.second);
        }
        for (auto i : v)
        {
            x = i.first;
            y = i.second;
            if (x >= ax && x <= bx && y >= ay && y <= by)
                ans++;
        }
        cout << ans << ((tcc != tc) ? "\n\n" : "\n");
        // (0 0, 1 4, 4 4, 6 3) 6 4
    }

    return 0;
}