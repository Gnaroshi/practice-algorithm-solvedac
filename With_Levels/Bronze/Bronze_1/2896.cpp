// problem: 무알콜 칵테일
// id: 2896
// tag:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b, c, ar, br, cr, m;
    cin >> a >> b >> c >> ar >> br >> cr;
    m = min(a / ar, min(b / br, c / cr));
    cout << fixed;
    cout.precision(5);
    cout << max(0.0, a - (m * ar)) << ' ' << max(0.0, b - (m * br)) << ' ' << max(0.0, c - (m * cr)) << '\n';

    return 0;
}