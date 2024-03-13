// problem: Rulltrappa
// id: 20867
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double a, b;
    int m, s, g, l, r, ta, tb, sa, sb;
    cin >> m >> s >> g >> a >> b >> l >> r;
    sa = l / a;
    sb = r / b;
    if (m % g == 0)
        ta = m / g;
    else
        ta = m / g + 1;
    if (m % s == 0)
        tb = m / s;
    else
        tb = m / s + 1;
    if (ta + sa < tb + sb)
        cout << "friskus";
    else
        cout << "latmask";
    return 0;
}