// problem: ЗАЙО БАЙО
// id: 24358
// time taken:
#include <bits/stdc++.h>
using namespace std;

int mt[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n, d, m, g;
    cin >> x >> n >> d >> m >> g;
    x = x * n * 2 - n - 1;
    d += x;
    if (g % 4 == 0 && g % 100 != 0 || g % 400 == 0)
        mt[1] = 29;
    else
        mt[1] = 28;
    while (d > mt[m - 1])
    {
        if (g % 4 == 0 && g % 100 != 0 || g % 400 == 0)
            mt[1] = 29;
        else
            mt[1] = 28;
        d -= mt[m - 1];
        m++;
        if (m > 12)
        {
            g++;
            m -= 12;
        }
    }

    cout << d << ' ' << m << ' ' << g;

    return 0;
}