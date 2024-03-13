// problem: King’s Heir
// id: 13483
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int kd, km, ky, d, m, y, n, ans = -1;
    int ad, am, ay;
    ad = am = ay = 1;
    cin >> kd >> km >> ky >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> d >> m >> y;
        y += 18;
        bool chk, ychk;
        if (y != ky)
            chk = ((ky > y) - (ky < y) != -1);
        else if (m != km)
            chk = ((km > m) - (km < m) != -1);
        else
            chk = ((kd > d) - (kd < d) != -1);

        if (y != ay)
            ychk = ((ay > y) - (ay < y) == -1);
        else if (m != am)
            ychk = ((am > m) - (am < m) == -1);
        else
            ychk = ((ad > d) - (ad < d) == -1);

        if (chk && ychk)
        {
            ay = y, am = m, ad = d;
            ans = i;
        }
    }
    if (ans != -1)
        cout << ans + 1;
    else
        cout << -1;

    return 0;
}