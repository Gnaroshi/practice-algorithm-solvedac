// problem: 다각형의 면적
// id: 2166
// tag: mathmatics, polygon, ccw
// time taken:
#include <bits/stdc++.h>
using namespace std;

double ans, xa, xb, xc, ya, yb, yc;

double fn(double xa, double xb, double xc, double ya, double yb, double yc)
{
    return (xa * yb + xb * yc + xc * ya - ya * xb - yb * xc - yc * xa) / 2.0;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<double, double>> v(n);
    for (auto &i : v)
        cin >> i.first >> i.second;

    for (int i = 1; i < n; i++)
    {
        xa = v[0].first, xb = v[i - 1].first, xc = v[i].first;
        ya = v[0].second, yb = v[i - 1].second, yc = v[i].second;
        ans += fn(xa, xb, xc, ya, yb, yc);
    }
    cout << fixed;
    cout.precision(1);
    cout << abs(ans) << '\n';
    return 0;
}
