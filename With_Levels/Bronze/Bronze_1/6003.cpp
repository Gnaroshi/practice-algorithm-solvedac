// problem: Claustrophobic Cows
// id: 6003
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;
    ll mx = 20000000001, t;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (auto &i : v)
        cin >> i.first >> i.second;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            t = (v[i].first - v[j].first) * (v[i].first - v[j].first) + (v[i].second - v[j].second) * (v[i].second - v[j].second);
            if (mx > t)
            {
                a = i, b = j;
                mx = t;
            }
        }
    }
    cout << a + 1 << ' ' << b + 1;

    return 0;
}