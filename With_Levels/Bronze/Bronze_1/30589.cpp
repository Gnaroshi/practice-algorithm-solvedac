// problem: Маска для монстров
// id: 30589
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    double a, b, mx = -1, s = 0, fa, fb, ba, bb, t;
    cin >> fa >> fb;
    ba = fa, bb = fb;
    for (int i = 1; i < n; i++)
    {
        cin >> a >> b;
        t = sqrt((ba - a) * (ba - a) + (bb - b) * (bb - b));
        mx = max(mx, t);
        s += t;
        ba = a, bb = b;
    }
    t = sqrt((fa - a) * (fa - a) + (fb - b) * (fb - b));
    mx = max(mx, t);
    s += t;
    cout << fixed;
    cout.precision(7);
    cout << s - mx;

    return 0;
}