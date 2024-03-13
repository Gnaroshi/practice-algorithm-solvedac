// problem: Mr. Gorbachev, Tear Down This Wall!
// id: 11431
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Data Set " << tcc << ":\n";
        int n, s, p, bx, by, x, y, tl = 0, ans;
        cin >> n >> s >> p >> bx >> by;
        while (n--)
        {
            cin >> x >> y;
            tl += (abs(bx - x) + abs(by - y));
            bx = x, by = y;
        }
        ans = (tl * s + p - 1) / p;
        cout << ans << "\n\n";
    }

    return 0;
}