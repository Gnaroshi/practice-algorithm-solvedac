// problem: Wymiana żarówki
// id: 8846
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int MOD = 500000009;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t = 4, ans = 1;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        ans += t;
        ans %= MOD;
        t *= 4;
        t %= MOD;
    }
    cout << ans;

    return 0;
}