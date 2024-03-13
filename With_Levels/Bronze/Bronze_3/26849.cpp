// problem: Non Classical Problem
// id: 26849
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ld = long double;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ld mn, mx, s, a, b, t;
    mn = 2000000001;
    mx = -1;
    s = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        t = a / b;
        if (mn > t)
            mn = t;
        if (mx < t)
            mx = t;
        s += t;
    }
    cout.precision(100);
    cout << mn << ' ' << mx << ' ' << s;

    return 0;
}