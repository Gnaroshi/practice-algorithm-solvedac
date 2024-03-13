// problem: Pismo
// id: 16756
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll ans = LLONG_MAX;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < n - 1; i++)
        ans = min(ans, abs(v[i] - v[i + 1]));
    cout << ans;

    return 0;
}