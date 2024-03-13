// problem: 대지
// id: 9063
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int mxx = -10001;
    int mxy = -10001;
    int mnx = 10001;
    int mny = 10001;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        mxx = max(mxx, a);
        mxy = max(mxy, b);
        mnx = min(mnx, a);
        mny = min(mny, b);
    }
    cout << abs(mxx - mnx) * abs(mxy - mny);

    return 0;
}