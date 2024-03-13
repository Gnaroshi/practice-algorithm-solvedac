// problem: Pooling PCR Tests
// id: 24746
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double p, t, mn = 0x3f3f3f3f;
    cin >> p;
    p = 1 - p;
    int ans = 30;
    for (int i = 2; i <= 16; i++)
    {
        t = pow(p, i);
        t = t / i + 1 - t;
        if (mn - t > 0.000001)
        {
            mn = t;
            ans = i;
        }
    }
    cout << ans;

    // P/N + 1-P

    return 0;
}