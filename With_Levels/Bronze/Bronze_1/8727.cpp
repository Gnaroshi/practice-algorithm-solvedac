// problem: Farby
// id: 8727
// time taken:
#include <bits/stdc++.h>
using namespace std;

void fn(double n)
{
    n = max(n, 0.0);
    if ((long long)(n * 10) % 10 != 0)
        printf("%.1lf ", n);
    else
        printf("%lld ", (long long)(n));
    return;
}

int main(void)
{
    double r, y, b;
    cin >> r >> y >> b;
    // y    g    b    p    r    o
    // y    y,b  b    b,r  r    y,r
    double co[6] = {0};
    for (int i = 0; i < 6; i++)
        cin >> co[i];
    r -= (co[4] + co[3] / 2 + co[5] / 2);
    y -= (co[0] + co[1] / 2 + co[5] / 2);
    b -= (co[2] + co[3] / 2 + co[1] / 2);
    r *= -1;
    y *= -1;
    b *= -1;
    fn(r);
    fn(y);
    fn(b);

    return 0;
}