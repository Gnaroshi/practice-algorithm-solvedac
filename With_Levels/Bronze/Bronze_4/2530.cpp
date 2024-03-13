#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, time;
    cin >> a >> b >> c >> time;

    int time_h, time_m, time_s;
    time_h = 0;
    time_m = time / 60;
    time_s = time % 60;

    a += time_h;
    b += time_m;
    c += time_s;

    while (c > 59)
    {
        b++;
        c -= 60;
    }

    while (b > 59)
    {
        a++;
        b -= 60;
    }

    while (a > 23)
    {
        a -= 24;
    }

    cout << a << " " << b << " " << c << '\n';

    return 0;
}
