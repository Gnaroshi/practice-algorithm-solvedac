// problem: Wak Sani Satay
// id: 15838
// time taken:
#include <bits/stdc++.h>
using namespace std;
double s[4] = {0.8, 1.0, 1.2, 0.8};
double m[4] = {15.5, 32.0, 40.0, 0.2};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int cs = 0;
    for (int i = 0; i < 3; i++)
        m[i] /= 85.0;
    cout << fixed;
    cout.precision(2);
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        double ans = 0, t;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cin >> t;
                ans += s[j] * t - m[j] * t;
            }
        }

        cout << "Case #" << ++cs << ": RM" << ans << '\n';
    }

    return 0;
}