// problem: Combination Lock
// id: 4327
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, a, b, c;
    while (true)
    {
        cin >> p >> a >> b >> c;
        if (p + a + b + c == 0)
            break;
        int ans = 120;
        ans += (p - a + b - a + b - c);
        if (p < a)
            ans += 40;
        if (a > b)
            ans += 40;
        if (b < c)
            ans += 40;

        cout << ans * 9 << '\n';
    }

    return 0;
}