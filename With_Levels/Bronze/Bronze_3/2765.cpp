// problem: 자전거 속도
// id: 2768
// time taken:
#include <bits/stdc++.h>
using namespace std;
const double PI = 3.1415927;
int main(void)
{

    double r, c, t, ret;
    int cnt = 1;
    while (true)
    {
        cin >> r >> c >> t;
        if (c == 0)
            break;
        ret = PI * r * c / 12 / 5280;
        // 총거리 마일로, 소수2
        printf("Trip #%d: %.2lf %.2lf\n", cnt++, ret, ret * 3600 / t);
    }

    return 0;
}