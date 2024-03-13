// problem: Гонки
// id: 19961
// time taken:
#include <bits/stdc++.h>
using namespace std;

double fn(double r, double q, double v, double t)
{
    if (r != 0 && q != 0)
        return r * t * 2 + q / v;
    else if (r != 0)
        return (r * 2 - 1) * t;
    return q / v;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double t1, v1, t2, v2, x, a, b, r1, q1, r2, q2;
    cin >> t1 >> v1 >> t2 >> v2 >> x;
    r1 = int(x) / int(v1 * t1), q1 = int(x) % int(v1 * t1);
    r2 = int(x) / int(v2 * t2), q2 = int(x) % int(v2 * t2);
    a = fn(r1, q1, v1, t1);
    b = fn(r2, q2, v2, t2);
    if (a < b)
        cout << "First";
    else if (a > b)
        cout << "Second";
    else
        cout << "Draw";

    return 0;
}