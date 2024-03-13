// problem: Chaarshanbegaan at Cafebazaar
// id: 16728
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0;
    int tc;
    cin >> tc;
    while (tc--)
    {
        double a, b, d;
        cin >> a >> b;
        d = sqrt(a * a + b * b);
        for (int i = 10, cd = 10; i >= 0; i--, cd += 20)
        {
            if (d <= cd)
            {
                ans += i;
                break;
            }
        }
    }
    cout << ans;

    return 0;
}