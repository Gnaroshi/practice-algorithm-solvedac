// problem: Лестница
// id: 29141
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x1, y1, x2, y2, a, b, x, y;
    cin >> x1 >> y1 >> x2 >> y2 >> a >> b;
    x = abs(x1 - x2);
    y = abs(y1 - y2);

    if (x / a >= (y + (b - 1)) / b)
        cout << x << ' ' << x / a << '\n'
             << y << ' ' << x / a;
    else
        cout << -1;

    return 0;
}