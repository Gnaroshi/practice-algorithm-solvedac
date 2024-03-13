// problem: 가뭄(Small)
// id: 19572
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    double d1, d2, d3;
    scanf("%lf %lf %lf", &d1, &d2, &d3);
    double a, b, c;
    if (d1 + d2 + d3 - 2 * (min(min(d1, d2), d3)) < 0)
        printf("-1");
    else
    {
        a = d1 + d2 - d3;
        b = d1 - d2 + d3;
        c = -d1 + d2 + d3;
        a /= 2;
        b /= 2;
        c /= 2;
        if (a <= 0 || b <= 0 || c <= 0)
            printf("-1");
        else
            printf("1\n%.1lf %.1lf %.1lf", a, b, c);
    }

    return 0;
}