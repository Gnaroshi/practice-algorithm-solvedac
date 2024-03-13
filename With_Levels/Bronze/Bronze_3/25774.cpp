// problem: Simplified Calendar System
// id: 25774
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int d1, m1, y1, n, d2, m2, y2;
    cin >> d1 >> m1 >> y1 >> n >> d2 >> m2 >> y2;
    y2 -= y1;
    m2 -= m1;
    d2 -= d1;
    if (d2 < 0)
    {
        m2--;
        d2 += 30;
    }
    if (m2 < 0)
    {
        y2--;
        m2 += 12;
    }
    d2 += m2 * 30 + y2 * 12 * 30;
    d2 %= 7;
    d2 += n;
    if (d2 > 7)
        d2 -= 7;
    cout << d2;

    return 0;
}