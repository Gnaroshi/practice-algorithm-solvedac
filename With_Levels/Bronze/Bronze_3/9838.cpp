// problem: XMAS
// id: 9838
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

    for (int i = 1; i <= n; i++)
        v.push_back({0, i});
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v[i].first = t;
    }
    sort(v.begin(), v.end());
    for (auto i : v)
        cout << i.second << '\n';

    return 0;
}
