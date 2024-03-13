// problem: ЧАСОВНИК
// id: 24335
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, m, dh, dm, c;
    cin >> h >> m >> dh >> dm >> c;
    dh %= 12;
    h += dh;
    m += dm;
    if (m >= 60)
    {
        m -= 60;
        h++;
    }
    h %= 12;

    if (c == 1)
        cout << h << ' ' << m;
    else
    {
        int fm = 5 * h + 5 * m / 60;
        if (m % 12 == 0)
            cout << "@ " << fm;
        else
            cout << fm << ' ' << (fm + 1) % 60;
    }

    return 0;
}