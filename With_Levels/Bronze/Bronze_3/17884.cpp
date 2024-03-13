// problem: Lost Lineup
// id: 17884
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
    v.push_back({-1, 1});
    for (int i = 2; i <= n; i++)
    {
        cin >> t;
        v.push_back({t, i});
    }
    sort(v.begin(), v.end());
    for (auto i : v)
        cout << i.second << ' ';

    return 0;
}