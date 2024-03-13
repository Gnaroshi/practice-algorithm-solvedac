// problem: Доставка футболок
// id: 19766
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, t, ans = 0;
    cin >> n >> k >> t;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first;
    for (int i = 0; i < n; i++)
        cin >> v[i].second;

    for (auto i : v)
    {
        ans += i.first;
        if (i.second <= ans)
            ans += t;
        else if (i.second <= ans + k)
            ans += i.second + t - ans;
        else
            ans += k;
    }
    cout << ans;

    return 0;
}