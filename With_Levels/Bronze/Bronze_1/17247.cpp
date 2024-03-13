// problem: 택시 거리
// id: 17247
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t;
    vector<pair<int, int>> v;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> t;
            if (t)
                v.push_back({i, j});
        }
    }
    cout << abs(v[0].first - v[1].first) + abs(v[0].second - v[1].second);

    return 0;
}