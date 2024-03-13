// problem: Steed 2: Cruise Control (Small)
// id: 14803
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cout << fixed;
    cout.precision(6);
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Case #" << tcc << ": ";
        double d, n, mxt = -1, k, s, t;
        cin >> d >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> k >> s;
            t = (d - k) / s;
            mxt = max(t, mxt);
        }
        cout << d / mxt << '\n';
    }

    return 0;
}