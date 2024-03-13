// problem: Just A Minim
// id: 15036
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double ans = 0;
    int n, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == 0)
            ans += 2.0;
        else if (t == 1)
            ans += 1.0;
        else if (t == 2)
            ans += 0.5;
        else if (t == 4)
            ans += 0.25;
        else if (t == 8)
            ans += 0.125;
        else if (t == 16)
            ans += 0.0625;
    }
    cout << fixed;
    cout.precision(7);
    cout << ans;

    return 0;
}