// problem: Making the Grade?
// id: 11340
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        a *= 15, b *= 20, c *= 25;
        int x = 9000 - a - b - c, ans = 0;
        while (x - ans * 40 > 0)
            ans++;
        if (ans > 100)
            cout << "impossible\n";
        else
            cout << ans << '\n';
    }

    return 0;
}