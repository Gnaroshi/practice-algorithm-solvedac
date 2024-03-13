// problem: Affischutskicket
// id: 24183
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    cin.tie(nullptr);

    double a, b, c;
    double ans = 0;
    cin >> a >> b >> c;

    ans += 229 * 324 * 0.001 * 0.001 * a * 2;
    ans += 297 * 420 * 0.001 * 0.001 * b * 2;
    ans += 210 * 297 * 0.001 * 0.001 * c;
    printf("%.6lf", ans);

    return 0;
}