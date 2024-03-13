// problem: Intergalactic Mortgage
// id: 6619
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        double x, y, r, tr, p;
        int n;
        cin >> x >> y >> n >> r;
        if (x + y + n + r == 0)
            break;
        tr = r / 1200.0;
        bool chk = true;
        if (x * tr >= y)
            chk = false;
        else if (r < 0.001 && y * n * 12 < x)
            chk = false;
        else
        {
            p = (x - y / tr) * (pow(tr + 1, 12 * n)) + y / tr;
            if (p > 0)
                chk = false;
        }
        cout << (chk ? "YES\n" : "NO\n");
    }

    return 0;
}