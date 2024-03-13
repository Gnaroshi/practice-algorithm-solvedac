#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int hour = 0;
    int work = 0;
    int fatigue = 0;
    int a, b, c, m;
    cin >> a >> b >> c >> m;

    while (true)
    {
        if (fatigue + a <= m)
        {
            fatigue += a;
            work += b;
        }
        else
        {
            fatigue -= c;
            if (fatigue < 0)
                fatigue = 0;
        }
        hour++;
        if (hour == 24)
            break;
    }
    cout << work << '\n';
    return 0;
}