// problem: Coupons
// id: 10179
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        double t;
        scanf("%lf", &t);
        printf("$%.2lf\n", t * 0.8);
    }

    return 0;
}