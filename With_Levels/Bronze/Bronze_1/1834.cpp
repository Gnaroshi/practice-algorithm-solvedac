// problem: 나머지와 몫이 같은 수
// id: 1834
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, ans = 0;
    cin >> n;
    for (ll i = 1; i < n; i++)
    {
        ans += i * n + i;
    }
    cout << ans;

    return 0;
}