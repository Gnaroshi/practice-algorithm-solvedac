// problem: Accumulator Battery
// id: 16648
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed;
    cout.precision(6);

    double t, p, b;
    cin >> t >> p;
    if (p <= 20)
    {
        b = ((20.0 - p) * 2.0 + 80.0) / t;
        cout << p / b * 2;
    }
    else
    {
        b = (100 - p) / t;
        cout << (p - 20.0) / b + 20.0 / b * 2.0;
    }

    return 0;
}