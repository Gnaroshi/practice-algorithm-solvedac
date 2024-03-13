// problem: 백발백준하는 명사수
// id: 22938
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    long long x1, y1, r1, x2, y2, r2;
    scanf("%lld %lld %lld", &x1, &y1, &r1);
    scanf("%lld %lld %lld", &x2, &y2, &r2);
    if ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) < (r1 + r2) * (r1 + r2))
        printf("YES");
    else
        printf("NO");

    return 0;
}