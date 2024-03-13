// problem: 명장 남정훈
// id: 15734
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    if (a > b)
        swap(a, b);
    if (a != b)
    {
        int d = b - a;
        a += min(d, c);
        c -= min(d, c);
        cout << a * 2 + (c / 2) * 2;
    }
    else
        cout << a * 2 + (c / 2) * 2;

    return 0;
}