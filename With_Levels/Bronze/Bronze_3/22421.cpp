// problem: Koto Municipal Subway
// id: 22421
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int d, e;
    cout << fixed;
    cout.precision(4);
    while (true)
    {
        cin >> d >> e;
        if (d + e == 0)
            break;
        double mn = 0x3f3f3f3f;
        for (int i = 0; i <= d / 2; i++)
        {
            double t = abs(sqrt(i * i + ((d - i) * (d - i))) - e);
            if (mn > t)
                mn = t;
        }
        cout << mn << '\n';
    }

    return 0;
}