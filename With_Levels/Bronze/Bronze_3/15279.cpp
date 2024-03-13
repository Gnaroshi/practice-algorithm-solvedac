// problem: Heart Rate
// id: 15279
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        double b, p, t;
        scanf("%lf %lf", &b, &p);
        t = 60 * b / p;
        printf("%.5lf %.5lf %.5lf\n", t * (1 - 1 / b), t, t * (1 + 1 / b));
    }

    return 0;
}
