// problem: Absolutely
// id: 26500
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{

    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        double a, b;
        scanf("%lf %lf", &a, &b);
        printf("%.1lf\n", abs(a - b));
    }

    return 0;
}