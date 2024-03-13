// problem: Contest Struggles
// id: 21339
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    double d, s, t;
    cin >> n >> k >> d >> s;
    cout << fixed;
    cout.precision(7);
    t = (n * d - k * s) / (n - k);
    if (t < 0 || t > 100)
        cout << "impossible";
    else
        cout << t;

    return 0;
}