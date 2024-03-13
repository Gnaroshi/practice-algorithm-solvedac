// problem: ПЪТУВАНЕ
// id: 24311
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int t1, t2, t3, t4, t5, br, t6;
    cin >> t1 >> t2 >> t3 >> t4 >> t5 >> br >> t6;
    int t = t1 * 60 + t2 - 10;
    t -= t3;
    t -= (t4 * 60 + t5);
    t -= t6 * (br + 1);
    printf("%02d %02d", t / 60, t % 60);

    return 0;
}