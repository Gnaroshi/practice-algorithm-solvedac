// problem: Vicinity
// id: 9611
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, tc, p;
    double b;
    cin >> n;
    vector<pair<double, double>> v(n);
    for (auto &i : v)
        cin >> i.first >> i.second;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        int cnt = 0;
        cin >> p >> b;
        p--;
        for (int j = 0; j < n; j++)
        {
            if (j == p)
                continue;
            if ((v[j].first - v[p].first) * (v[j].first - v[p].first) + (v[j].second - v[p].second) * (v[j].second - v[p].second) <= b * b)
                cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}