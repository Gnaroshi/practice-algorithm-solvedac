// problem: Bank Transfer
// id: 21633
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    double k;
    double ans = 0;
    cin >> k;

    ans += 25.0 + k * 0.01;
    if (ans < 100)
        printf("%.2lf", 100.0);
    else if (ans > 2000)
        printf("%.2lf", 2000.0);
    else
        printf("%.2lf", ans);

    return 0;
}