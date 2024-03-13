// problem: Close Enough Computations
// id: 4727
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double k, j, t, d;
    while (true)
    {
        cin >> k >> j >> t >> d;
        if (k + j + t + d <= 0.0000001)
            break;
        double l = max(0.0, (j - 0.5)) * 9 + max(0.0, (t - 0.5)) * 4 + max(0.0, (d - 0.5)) * 4;
        double r = (j + 0.5) * 9 + (t + 0.5) * 4 + (d + 0.5) * 4;
        if (floor(l + 0.5) <= k && k < floor(r + 0.5))
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}