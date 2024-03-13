// problem: Quadratics
// id: 26548
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cout << fixed;
    cout.precision(3);
    while (tc--)
    {
        double a, b, c, q;
        cin >> a >> b >> c;
        q = sqrt(b * b - 4 * a * c);
        cout << (-b + q) / a / 2.0 << ", " << (-b - q) / a / 2.0 << '\n';
    }

    return 0;
}