#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, n, m;
    cin >> k >> n >> m;

    int ans = k * n - m;
    if (ans > 0)
        cout << ans << '\n';
    else
        cout << 0 << '\n';
    return 0;
}