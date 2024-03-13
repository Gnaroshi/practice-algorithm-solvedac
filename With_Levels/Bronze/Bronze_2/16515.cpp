// problem: Euler’s Number
// id: 16515
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double e[18];
    e[0] = 1;
    e[1] = 2;
    long long t = 1;
    for (long long i = 2; i <= 18; i++)
    {
        t *= i;
        e[i] = e[i - 1] + 1.0 / t;
    }
    int n;
    cin >> n;
    cout << fixed;
    cout.precision(15);
    cout << e[min(17, n)];

    return 0;
}