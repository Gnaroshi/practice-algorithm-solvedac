// problem: 선물
// id: 28281
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x, mn = 0x3f3f3f3f;
    cin >> n >> x;
    ll *sx = (ll *)malloc(sizeof(ll) * n);
    for (int i = 0; i < n; i++)
        cin >> sx[i];
    for (int i = 0; i < n - 1; i++)
        mn = min(sx[i] + sx[i + 1], mn);
    cout << mn * x;

    return 0;
}