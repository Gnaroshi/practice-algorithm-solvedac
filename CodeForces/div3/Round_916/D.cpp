// problem: D. Three Activities
// id:
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
        int n, t, mx = 0;
        cin >> n;
        vector<pair<int, int>> a, b, c;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            a.push_back({t, i});
        }
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            b.push_back({t, i});
        }
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            c.push_back({t, i});
        }
        sort(a.begin(), a.end(), greater<>());
        sort(b.begin(), b.end(), greater<>());
        sort(c.begin(), c.end(), greater<>());
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (a[i].second != b[j].second && a[i].second != c[k].second && c[k].second != b[j].second)
                        mx = max(mx, a[i].first + b[j].first + c[k].first);
                }
            }
        }
        cout << mx << '\n';
    }

    return 0;
}