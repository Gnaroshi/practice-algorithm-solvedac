// problem: Smallest Calculated Value
// id: 27393
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, mn = 0x3f3f3f3f;
    cin >> a >> b >> c;
    mn = min(a + b + c, mn);
    if (a + b - c >= 0)
        mn = min(mn, a + b - c);
    mn = min((a + b) * c, mn);
    if ((a + b) % c == 0)
        mn = min(mn, (a + b) / c);

    if (a - b + c >= 0)
        mn = min(mn, a - b + c);
    if (a - b - c >= 0)
        mn = min(mn, a - b - c);
    if ((a - b) * c >= 0)
        mn = min(mn, (a - b) * c);
    if ((a - b) % c == 0 && (a - b) >= 0)
        mn = min(mn, (a - b) / c);

    mn = min(a * b + c, mn);
    if (a * b - c >= 0)
        mn = min(mn, a * b - c);
    mn = min(a * b * c, mn);
    if ((a * b) % c == 0)
        mn = min(mn, a * b / c);

    if (a % b == 0 && a / b - c >= 0)
        mn = min(mn, a / b - c);
    if (a % b == 0 && a / b + c >= 0)
        mn = min(mn, a / b + c);
    if (a % b == 0 && a / b * c >= 0)
        mn = min(mn, a / b * c);
    if (a % b == 0 && (a / b) % c == 0 && a / b / c >= 0)
        mn = min(mn, a / b / c);

    cout << mn << '\n';

    return 0;
}