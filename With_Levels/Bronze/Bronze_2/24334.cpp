// problem: SD КАРТИ
// id: 24334
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m = 0, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        m += 60 * a + b;
    }
    double mn = 1000000000.0;
    for (int i = 50; i >= 0; i--)
    {
        for (int j = 50; j >= 0; j--)
        {
            if (i * 240 + j * 180 >= m)
            {
                mn = min(mn, i * 10.9 + j * 9.15);
            }
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << mn;
    // 720 32.7 36.6

    return 0;
}