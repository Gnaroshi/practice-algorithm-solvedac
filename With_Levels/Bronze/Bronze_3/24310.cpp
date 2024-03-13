// problem: БОЯДИСВАНЕ НА ОГРАДА
// id: 24310
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b)
        swap(a, b);
    if (c > d)
        swap(c, d);

    if ((a <= c && c <= b) || (a <= d && c <= a))
        cout << max(b, d) - min(a, c) + 1;
    else
        cout << b - a + d - c + 2;

    return 0;
}