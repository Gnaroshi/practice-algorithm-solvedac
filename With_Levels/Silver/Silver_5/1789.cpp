// problem: 수들의 합
// id: 1789
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll s, ans = 1;
    cin >> s;

    while (true)
    {
        if (ans * (ans + 1) > 2 * s)
        {
            cout << ans - 1;
            return 0;
        }
        ans++;
    }

    return 0;
}