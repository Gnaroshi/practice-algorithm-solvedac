// problem: N번 - 크냑과 3D 프린터
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long s = 0, e, bef, c, ans = 0;
    cin >> n;
    cin >> bef;
    s = ans = bef;
    for (int i = 1; i < n; i++)
    {
        cin >> c;
        ans += abs(c - bef);
        bef = c;
        s += c;
    }
    ans += bef + n * 2 + s * 2;
    cout << ans;
    return 0;
}