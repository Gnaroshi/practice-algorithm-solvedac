// problem: 합금 주화
// id: 27963
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double d1, d2, x;
    cin >> d1 >> d2 >> x;
    x /= 100;
    cout.precision(8);
    if (d1 < d2)
        swap(d1, d2);
    if (x == 1)
        cout << d1;
    else
    {
        double t = x / (1 - x);
        cout << d1 * d2 * (t + 1) / (d2 * t + d1);
    }
    return 0;
}