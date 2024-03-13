// problem: Preokret
// id: 18271
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a = 0, b = 0, ti = 1, to = 1, tot = 1, t, bef = 0;
    bool chk = true;
    cin >> n;
    while (n--)
    {
        cin >> t;

        if (bef == t)
        {
            if (tot == 1)
                chk = a > b;
            tot++;
        }
        else
        {
            if ((bef == 1 && a > b && !chk) || (bef == 2 && a < b && chk))
                to = max(to, tot);
            tot = 1;
        }
        if (t == 1)
            a++;
        else
            b++;
        if (a == b)
            ti++;
        bef = t;
    }
    if ((bef == 1 && a > b && !chk) || (bef == 2 && a < b && chk))
        to = max(to, tot);
    cout << a << ' ' << b << '\n'
         << ti << '\n'
         << to << '\n';

    return 0;
}