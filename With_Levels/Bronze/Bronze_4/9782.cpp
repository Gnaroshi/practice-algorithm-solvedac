// problem: Median
// id: 9782 (unrated)
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int cnt = 1;

    while (true)
    {
        int n;
        double t;
        cin >> n;
        if (n == 0)
            break;
        double *ns = (double *)malloc(sizeof(double) * n + 1);
        for (int i = 1; i <= n; i++)
            cin >> ns[i];
        if (n % 2 == 0)
            t = (ns[n / 2] + ns[n / 2 + 1]) / 2;
        else
            t = (ns[n / 2 + 1]);
        printf("Case %d: %.1lf\n", cnt++, t);
    }

    return 0;
}