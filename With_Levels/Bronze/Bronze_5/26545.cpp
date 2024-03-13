#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tc;
    cin >> tc;
    ll ans = 0;

    while (tc--)
    {
        ll temp;
        cin >> temp;
        ans += temp;
    }
    cout << ans << '\n';

    return 0;
}