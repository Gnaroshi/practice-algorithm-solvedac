// problem: Infinity Area
// id: 25084
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << fixed;
    cout.precision(10);
    for (int i = 1; i <= n; i++)
    {
        cout << "Case #" << i << ": ";
        double r, a, b;
        double ans = 0;
        cin >> r >> a >> b;
        bool bt = true;
        while (true)
        {
            ans += r * r;
            if (bt)
                r *= a;
            else
            {
                r = floor(r / b);
            }
            if (r == 0)
                break;
            bt = !bt;
        }

        cout << double(M_PI) * ans << '\n';
    }

    return 0;
}