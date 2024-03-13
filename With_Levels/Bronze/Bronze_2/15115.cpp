// problem: Delayed Work
// id: 15115
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed;
    cout.precision(3);
    double k, p, x, m;
    cin >> k >> p >> x;
    m = round(sqrt(k * p / x));
    cout << min(x * m + k * p / m, x * (m + 1) + k * p / (m + 1));

    return 0;
}