// problem: Triangles (Bronze)
// id: 18786
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx = 0;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (auto &i : v)
        cin >> i.first >> i.second;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if ((v[i].first == v[j].first && v[i].second == v[k].second) || (v[i].first == v[j].first && v[j].second == v[k].second) || (v[j].first == v[k].first && v[j].second == v[i].second) || (v[j].first == v[k].first && v[k].second == v[i].second) || (v[i].first == v[k].first && v[k].second == v[j].second) || (v[i].first == v[k].first && v[i].second == v[j].second))
                    mx = max(mx,
                             abs(v[i].first * (v[j].second - v[k].second) +
                                 v[j].first * (v[k].second - v[i].second) +
                                 v[k].first * (v[i].second - v[j].second)));
            }
        }
    }
    cout << mx;
    // mx = max(mx, abs(v[i].first - v[k].first) * abs(v[i].second - v[k].second));

    // a, b, c;
    // x y
    // ab ac (a - c) * (a - b)
    // ab bc (b - c) * (a - b)
    // bc ba
    // bc ca
    // ac cb
    // ac ab

    return 0;
}