// problem: Quality-Adjusted Life-Year
// id: 22279
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    double q, y, ans = 0;
    cin >> tc;
    while (tc--)
    {
        cin >> q >> y;
        ans += q * y;
    }
    cout << fixed;
    cout.precision(5);
    cout << ans;

    return 0;
}