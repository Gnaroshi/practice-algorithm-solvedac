// problem: The Traveling Orienteerer
// id: 11113
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, p, t, b;
    cin >> n;
    vector<pair<double, double>> v(n);
    for (auto &i : v)
        cin >> i.first >> i.second;
    cin >> m;
    while (m--)
    {
        double ans = 0;
        cin >> p >> b;
        for (int i = 1; i < p; i++)
        {
            cin >> t;
            ans += sqrt((v[b].first - v[t].first) * (v[b].first - v[t].first) + (v[b].second - v[t].second) * (v[b].second - v[t].second));
            b = t;
        }
        cout << round(ans) << '\n';
    }

    return 0;
}