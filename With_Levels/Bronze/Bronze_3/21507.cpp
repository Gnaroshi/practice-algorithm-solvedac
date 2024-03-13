// problem: POBEDA-2014
// id: 21507
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a[4];
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    ll aa = min(a[0], a[1]);
    ll bb = min(a[2], a[3]);
    aa += bb;
    ll ans;
    for (ll i = 0; i * i <= aa; i++)
        ans = i;
    cout << ans;

    return 0;
} 