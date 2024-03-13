#include <bits/stdc++.h>
using namespace std;

double a, b;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed;
    cout.precision(5);

    cin >> a >> b;
    double dif = b - a;
    double m = dif / 400;
    double factor = pow(double(10), m);
    double ans = double(1.0) / double((1 + factor));
    cout << ans << '\n';
    return 0;
}