// problem: 구와 쿼리
// id: 13552
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, ans;
    ll tx, ty, tz, tr;
    cin >> n;
    vector<ll> x(n), y(n), z(n);
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i] >> z[i];
    cin >> m;
    while (m--)
    {
        cin >> tx >> ty >> tz >> tr;
        ll trr = tr * tr;
        ans = 0;
        for (int i = 0; i < n; i++)
        {
            if ((tx - x[i]) * (tx - x[i]) + (ty - y[i]) * (ty - y[i]) + (tz - z[i]) * (tz - z[i]) <= trr)
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}