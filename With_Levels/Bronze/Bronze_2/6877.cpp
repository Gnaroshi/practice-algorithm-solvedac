// problem: Mouse Move
// id: 6877
// time taken:
#include <bits/stdc++.h>
using namespace std;
int mc, mr, c, r, x, y;

int clamp(int n, int mx, int mn, int ad)
{
    n += ad;
    if (n < mn)
        return mn;
    if (n > mx)
        return mx;
    return n;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> mc >> mr;
    bool st = true;
    while (true)
    {
        cin >> x >> y;
        if (!x && !y)
            break;
        else
        {
            c = clamp(c, mc, 0, x);
            r = clamp(r, mr, 0, y);
        }
        cout << c << ' ' << r << '\n';
    }

    return 0;
}