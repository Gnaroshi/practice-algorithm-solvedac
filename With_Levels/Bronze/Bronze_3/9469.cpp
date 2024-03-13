// problem: 폰 노이만
// id: 9469
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, n;
    double d, a, b, f, t;
    cout << fixed;
    cout.precision(6);
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        cin >> n >> d >> a >> b >> f;
        t = d / (a + b);
        cout << i << ' ' << t * f << '\n';
    }

    return 0;
}