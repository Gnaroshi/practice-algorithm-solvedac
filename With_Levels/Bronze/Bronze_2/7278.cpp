// problem: Kaladėlės
// id: 7278
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, md = 0x3f3f3f3f, sl, ans, t;
    cin >> n;

    for (int i = 0; i < 3; i++)
    {
        cin >> t;
        if (n % t == 0)
        {
            cout << t << ' ' << n;
            return 0;
        }
        else
        {
            int d, a, b;
            a = abs(n / t * t - n);
            b = abs((n + (t - (n % t))) / t * t - n);
            if (a <= b)
                d = n - a;
            else
                d = n + b;
            if (abs(n - d) < md)
            {
                sl = t;
                ans = d;
                md = abs(n - d);
            }
        }
    }
    cout << sl << ' ' << ans;

    return 0;
}