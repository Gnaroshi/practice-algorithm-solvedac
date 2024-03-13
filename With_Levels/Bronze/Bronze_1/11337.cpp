// problem: Largest inscribed rectangle
// id: 11337
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
        double r, b, c;
        cin >> r >> b;
        c = min(b, r * (sqrt(2)));
        cout << sqrt(4 * r * r - c * c) * c << '\n';
    }

    return 0;
}