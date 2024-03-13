// problem: Rope Intranet (Small)
// id: 12571
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        cout << "Case #" << i << ": ";
        int n, a, b, cnt = 0;
        cin >> n;
        vector<pair<int, int>> v;
        for (int j = 0; j < n; j++)
        {
            cin >> a >> b;
            v.push_back({a, b});
        }
        for (int j = 0; j < n; j++)
        {
            a = v[j].first;
            b = v[j].second;
            for (int k = j + 1; k < n; k++)
            {
                int x = v[k].first;
                int y = v[k].second;
                if (a > x && b < y || a < x && b > y)
                    cnt++;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}