// problem: 이게 분수?
// id: 2863
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b, c, d, t;
    cin >> a >> b >> c >> d;
    double mx = -1;
    int mxi = 0;
    for (int i = 0; i < 4; i++)
    {
        t = a / c + b / d;
        if (mx < t)
        {
            mx = t;
            mxi = i;
        }
        t = a;
        a = c;
        c = d;
        d = b;
        b = t;
    }
    cout << mxi;

    return 0;
}