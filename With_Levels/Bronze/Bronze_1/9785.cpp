// problem: Damage Over Time
// id: 9785
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a = 0, b = 0x3f3f3f3f;
    cin >> n >> m;
    vector<pair<int, int>> v(n);
    for (auto &i : v)
        cin >> i.first >> i.second;
    sort(v.begin(), v.end(), greater<>());
    for (int i = 0; i < m; i++)
    {
        a += v[i].first;
        b = min(b, v[i].second);
    }
    cout << a << ' ' << b;

    return 0;
}