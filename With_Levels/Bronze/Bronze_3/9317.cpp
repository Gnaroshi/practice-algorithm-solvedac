// problem: Monitor DPI
// id: 9317
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double d, rh, rv;
    while (true)
    {
        cin >> d >> rh >> rv;
        if (d + rh + rv == 0)
            break;
        double h, w, r;
        r = (9.0 / 16.0);
        w = 16.0 * d / sqrt(337);
        h = w * r;
        cout << fixed;
        cout.precision(2);
        cout << "Horizontal DPI: " << rh / w << '\n';
        cout << "Vertical DPI: " << rv / h << '\n';
    }

    return 0;
}