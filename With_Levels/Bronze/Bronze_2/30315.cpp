// problem: King's Keep
// id: 30315
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;
    vector<pair<int, int>> v(k);
    double mn = 0xffffffff;
    for (auto &i : v)
        cin >> i.first >> i.second;
    for (int i = 0; i < k; i++)
    {
        double t = 0, cx = v[i].first, cy = v[i].second;
        for (int j = 0; j < k; j++)
        {
            if (i == j)
                continue;
            t += sqrt((cx - v[j].first) * (cx - v[j].first) + (cy - v[j].second) * (cy - v[j].second));
        }
        mn = min(mn, t / (k - 1));
    }
    cout << fixed;
    cout.precision(8);
    cout << mn;

    return 0;
}