// problem: Шары
// id: 29596
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double x1, v1, x2, v2, t;
    cin >> x1 >> v1 >> x2 >> v2 >> t;
    if (((x1 + v1 * t) - (x2 + v2 * t)) * (x1 - x2) > 0)
    {
        cout << int(x1 + v1 * t) << ' ' << int(v1) << '\n';
        cout << int(x2 + v2 * t) << ' ' << int(v2);
    }
    else
    {
        double vt = (x1 - x2) / (v2 - v1);
        double m = x1 + v1 * vt;
        cout << int(m + v2 * (t - vt)) << ' ' << int(v2) << '\n';
        cout << int(m + v1 * (t - vt)) << ' ' << int(v1);
    }
    // x1+v1*t = x2+v2*t
    // t = x1-x2/v2-v1

    return 0;
}