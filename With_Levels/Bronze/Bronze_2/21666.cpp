// problem: Треугольник Максима
// id: 21666
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
    cout.precision(6);
    string s;
    double cur, t, dif, mn = 30, mx = 4000;
    cin >> cur;
    for (int i = 1; i < n; i++)
    {
        cin >> t >> s;
        dif = (cur + t) / 2;
        if (s[0] == 'c')
        {
            if (t > cur && mn < dif)
                mn = dif;
            if (t < cur && mx > dif)
                mx = dif;
        }
        else
        {
            if (t < cur && mn < dif)
                mn = dif;
            if (t > cur && mx > dif)
                mx = dif;
        }
        cur = t;
    }
    cout << mn << ' ' << mx;

    // 440 220 330 30 330
    // 220 300 260 30 260

    // 554 880 717 30 717
    // 880 440 660 30 660
    // 440 622 531 c 531 660

    return 0;
}