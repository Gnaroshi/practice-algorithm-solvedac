// problem: Centroid of Point Masses
// id: 9945
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{

    double a, b, y, x, m;
    int n;
    int cnt = 1;
    while (true)
    {
        scanf("%d", &n);
        if (n < 0)
            break;
        y = x = m = 0;
        double tx, ty, tm;
        for (int i = 0; i < n; i++)
        {
            scanf("%lf %lf %lf", &tx, &ty, &tm);
            m += tm;
            y += ty * tm;
            x += tx * tm;
        }
        printf("Case %d: %.2lf %.2lf\n", cnt++, x / m, y / m);

    }
    return 0;
}