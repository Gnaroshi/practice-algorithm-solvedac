// problem: Max Volume
// id: 9776
// time taken:
#include <bits/stdc++.h>
using namespace std;
const double PI = 3.14159;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    double mx = -1;
    char c;
    double a, b, t;
    while (tc--)
    {
        cin >> c;
        if (c == 'C')
        {
            cin >> a >> b;
            t = PI * (1.0 / 3.0) * a * a / b;
        }
        else if (c == 'L')
        {
            cin >> a >> b;
            t = PI * a * a / b;
        }
        else
        {
            cin >> a;
            t = (4.0 / 3.0) * PI * a * a * a;
        }
        mx = max(t, mx);
    }
    cout << fixed;
    cout.precision(3);
    cout << mx;

    return 0;
}