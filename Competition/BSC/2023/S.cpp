// problem: S번 - 브실이의 입시전략
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k, mn = 0, mx = 0, rv = 0;
    cin >> n >> m >> k;
    vector<pair<int, string>> v(n);
    vector<int> sc;
    for (auto &i : v)
        cin >> i.second >> i.first;

    for (int i = 0; i < k; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            if (v[j].second == s)
            {
                rv += v[j].first;
                v[j].first = 0;
                break;
            }
        }
    }
    sort(v.begin(), v.end());
    for (int i = k; i < m; i++)
        mn += v[i].first;
    for (int i = n - 1; i >= n - (m - k); i--)
        mx += v[i].first;
    cout << mn + rv << ' ' << mx + rv;

    return 0;
}