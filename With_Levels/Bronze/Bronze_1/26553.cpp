#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        double k, p, x;
        double m = 1;
        double mn = 1000000000000;
        cin >> k >> p >> x;
        while (true)
        {
            double temp = k * p / m + x * m;
            if (temp > mn)
                break;
            mn = temp;
            m++;
        }
        printf("%.3lf\n", mn);
    }

    return 0;
}