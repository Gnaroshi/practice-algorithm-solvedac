// problem: New Financial Year
// id: 21105
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    double p, c;
    cout << fixed;
    cout.precision(7);
    while (tc--)
    {
        cin >> p >> c;
        c += 100.0;
        cout << p / c * 100 << '\n';
    }

    return 0;
}