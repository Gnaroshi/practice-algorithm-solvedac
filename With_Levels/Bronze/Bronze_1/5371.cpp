// problem: Annoying Mosquitos
// id: 5371
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int ans = 0;
        int n, m, x, y;
        cin >> n;

        vector<pair<int, int>> v(n);
        bool *chk = new bool[n];
        fill(chk, chk + n, true);
        for (auto &i : v)
            cin >> i.first >> i.second;
        cin >> m;
        while (m--)
        {
            cin >> x >> y;
            for (int i = 0; i < n; i++)
            {
                if (chk[i])
                {
                    if (abs(v[i].first - x) <= 50 && abs(v[i].second - y) <= 50)
                    {
                        chk[i] = false;
                        ans++;
                    }
                }
            }
        }

        cout << ans << '\n';
    }
    return 0;
}