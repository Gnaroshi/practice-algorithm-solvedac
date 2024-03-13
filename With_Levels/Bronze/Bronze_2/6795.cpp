// problem: Up and Down
// id: 6795
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, s, cn = 0, cb = 0, t = 0;
    cin >> a >> b >> c >> d >> s;
    bool chk = false;
    while (true)
    {
        if (chk)
            cn -= b, t += b;
        else
            cn += a, t += a;
        if (t >= s)
        {
            cn -= t - s;
            break;
        }
        chk = !chk;
    }
    t = 0;
    chk = false;
    while (true)
    {
        if (chk)
            cb -= d, t += d;
        else
            cb += c, t += c;
        if (t >= s)
        {
            cb -= t - s;
            break;
        }
        chk = !chk;
    }

    if (cn > cb)
        cout << "Nikky";
    else if (cn < cb)
        cout << "Byron";
    else
        cout << "Tied";

    return 0;
}