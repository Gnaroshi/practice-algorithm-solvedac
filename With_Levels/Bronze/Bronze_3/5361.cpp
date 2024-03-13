// problem: 전투 드로이드 가격
// id: 5361
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long double a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        a *= 350.34;
        b *= 230.90;
        c *= 190.55;
        d *= 125.30;
        e *= 180.90;
        printf("$%.2Lf\n", a + b + c + d + e);
    }
    return 0;
}