// problem: 보물 지도
// id: 29332
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int MX = 1000000001;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, l = 1000000001, r = -1000000001, u = -1000000001, d = 1000000001, x, y;
    char c;
    bool chkd[4] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> c;
        if (c == 'L')
        {
            l = min(x, l);
            chkd[0] = 1;
        }
        else if (c == 'R')
        {
            r = max(x, r);
            chkd[1] = 1;
        }
        else if (c == 'U')
        {
            u = max(y, u);
            chkd[2] = 1;
        }
        else
        {
            d = min(y, d);
            chkd[3] = 1;
        }
    }
    bool chk = true;
    for (int i = 0; i < 4; i++)
        if (!chkd[i])
            chk = false;
    if (!chk)
        cout << "Infinity";
    else
        cout << (abs(l - r) - 1LL) * (abs(u - d) - 1LL);

    return 0;
}