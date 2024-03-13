// problem: KLOPKA
// id: 10540
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mnx = 100, mny = 100, mxx = 0, mxy = 0, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        mnx = min(mnx, x);
        mny = min(mny, y);
        mxx = max(mxx, x);
        mxy = max(mxy, y);
    }
    t = max((mxx - mnx), (mxy - mny));
    cout << t * t;

    return 0;
}