// problem: Millennium
// id: 7015
// time taken:
#include <bits/stdc++.h>
using namespace std;

int fn(int y, int m, int d)
{
    int ret = d;
    for (int i = 1; i < y; i++)
    {
        if (i % 3)
            ret += 195;
        else
            ret += 200;
    }
    if (y % 3)
    {
        for (int i = 1; i < m; i++)
            ret += 20 - !(i % 2);
    }
    else
        ret += (m - 1) * 20;
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, y, m, d, md = (1000) / 3 * 200 + (1000 - 1000 / 3 - 1) * 195 + 1;
    cin >> n;
    while (n--)
    {
        cin >> y >> m >> d;
        cout << md - fn(y, m, d) << '\n';
    }
    return 0;
}