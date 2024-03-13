// problem: Life Savings
// id: 15083
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double p[3], s = 0;
    double c1, c2, c3;
    for (int i = 0; i < 3; i++)
    {
        cin >> p[i];
        s += p[i];
    }
    cin >> c1 >> c2 >> c3;
    if (c2 < c3)
        swap(c2, c3);
    sort(p, p + 3);

    double a, b;
    a = s * (c1) / 100;
    b = ((c2)*p[2] + (c3)*p[1]) / 100;
    cout << fixed;
    cout.precision(2);
    if (a > b)
        cout << "one " << a;
    else
        cout << "two " << b;

    return 0;
}