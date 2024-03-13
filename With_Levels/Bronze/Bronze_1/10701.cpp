// problem: PAPRIKA
// id: 10701
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, a, b, ans = 0;
    cin >> n >> x;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back({a, b});
    }

    for (int i = 1; i < n; i++)
    {
        if (v[i].first > v[i - 1].first && v[i].second == 1 && v[i - 1].second == 0)
        {

            int t = v[i].first;
            v[i].first = v[i - 1].first;
            v[i - 1].first = t;
        }
        else if (v[i].first < v[i - 1].first && v[i].second == 0 && v[i - 1].second == 1)
        {
            int t = v[i].first;
            v[i].first = v[i - 1].first;
            v[i - 1].first = t;
        }
    }
    for (auto i : v)
    {
        if (i.first > x && i.second == 0)
            ans++;
        else if (i.first <= x && i.second == 1)
            ans++;
    }
    cout << ans;

    return 0;
}