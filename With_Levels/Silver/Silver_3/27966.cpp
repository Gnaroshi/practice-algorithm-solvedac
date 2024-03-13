// problem: △
// id: 27966
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    cout << (n - 1) * (n - 1) << '\n';
    for (ll i = 2; i <= n; i++)
        cout << i << " 1" << '\n';

    return 0;
}