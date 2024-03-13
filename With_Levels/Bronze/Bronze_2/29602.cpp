// problem: Расписание
// id: 29602
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n;
    vector<pair<int, int>> v;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back({t, i});
    }
    sort(v.begin(), v.end());
    for (int i = 1; i <= n; i++)
        ans[v[i - 1].second] = i;
    for (auto i : ans)
        cout << i << ' ';

    return 0;
}