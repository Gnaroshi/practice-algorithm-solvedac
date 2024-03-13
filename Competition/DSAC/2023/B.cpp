// problem: B번 - 점수를 최대로
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k, t, mx = 0;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    vector<ll> d(n);
    d[0] = a[0];
    for (int i = 1; i < n; i++)
        d[i] = d[i - 1] + a[i];
    sort(d.begin(), d.end(), greater<>());
    for (int i = 0; i < k; i++)
        mx += d[i];
    cout << mx;

    return 0;
}