// problem: Animal Conference
// id: 26537
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
        int z, t, mn = 0x3f3f3f3f;
        pair<int, int> a, b;
        cin >> z;
        vector<pair<int, int>> v(z);
        for (auto &i : v)
            cin >> i.first >> i.second;
        sort(v.begin(), v.end());
        for (int i = 0; i < z - 1; i++)
        {
            for (int j = i + 1; j < z; j++)
            {
                t = (v[i].first - v[j].first) * (v[i].first - v[j].first) + (v[i].second - v[j].second) * (v[i].second - v[j].second);
                if (t < mn)
                {
                    a = v[i], b = v[j];
                    mn = t;
                }
            }
        }
        cout << a.first << ' ' << a.second << ' ' << b.first << ' ' << b.second << '\n';
    }

    return 0;
}