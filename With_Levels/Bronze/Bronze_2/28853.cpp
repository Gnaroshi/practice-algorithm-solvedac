// problem: Разбиение на пары
// id: 28853
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, t, ans = 0;
    cin >> a >> b >> c >> d;
    a &= 1, c &= 1;
    t = min(b, d);
    b -= t, d -= t;

    if (a && b)
        b--, ans++;
    else if (a && d)
        d--, ans++;
    else if (a && c)
        c--, ans += 2;
    if (c && b)
        b--, ans++;
    else if (c && d)
        d--, ans++;
    cout << ans + b + d;

    return 0;
}