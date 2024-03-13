// problem: 사각형 면적
// id: 22341
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, c, a, b, x, y;
    cin >> n >> c;
    a = b = n;
    for (int i = 0; i < c; i++)
    {
        cin >> x >> y;
        if (a <= x || b <= y)
            continue;
        if (min(a, x) * b > a * min(b, y))
            a = x;
        else if (min(a, x) * b < a * min(b, y))
            b = y;
        else
            a = min(x, a);
    }
    cout << a * b;

    return 0;
}