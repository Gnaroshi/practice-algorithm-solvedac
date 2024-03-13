#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, s;
    cin >> r >> s;
    int ans = 8 * r + 3 * s - 28;
    if (ans < 0)
        cout << 0 << '\n';
    else
        cout << ans << '\n';

    return 0;
}