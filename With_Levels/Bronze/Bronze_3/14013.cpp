// problem: Unit Conversion
// id: 14013
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b;
    int n;
    cin >> a >> b >> n;
    cout << fixed;
    cout.precision(6);
    while (n--)
    {
        double t;
        char c;
        cin >> t >> c;
        if (t == 0)
            cout << 0 << '\n';
        else
        {
            if (c == 'B')
            {
                cout << t / b * a << '\n';
            }
            else
            {
                cout << t / a * b << '\n';
            }
        }
    }

    return 0;
}