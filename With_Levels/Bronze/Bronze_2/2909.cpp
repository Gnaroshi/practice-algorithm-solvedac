// problem: 캔디 구매
// id: 2909
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int c, k, t = 1;
    cin >> c >> k;
    if (k == 0)
    {
        cout << c;
        return 0;
    }
    for (int i = 0; i < k; i++)
        t *= 10;
    if (c % t >= t / 2)
        cout << c / t * t + t;
    else
        cout << c / t * t;

    return 0;
}