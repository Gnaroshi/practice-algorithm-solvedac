// problem: Sim Card
// id: 15340
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int c, d;
        cin >> c >> d;
        if (c + d == 0)
            break;
        int ans = INT_MAX;
        ans = min(ans, 30 * c + 40 * d);
        ans = min(ans, 35 * c + 30 * d);
        ans = min(ans, 40 * c + 20 * d);
        cout << ans << '\n';
    }

    return 0;
}