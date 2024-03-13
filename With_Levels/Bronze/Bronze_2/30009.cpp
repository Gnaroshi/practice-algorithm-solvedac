// problem: 포지션 제로
// id: 30009
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y, r, t, a = 0, b = 0;
    cin >> n >> x >> y >> r;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t > x - r && t < x + r)
            a++;
        else if (t == x - r || t == x + r)
            b++;
    }
    cout << a << ' ' << b;

    return 0;
}