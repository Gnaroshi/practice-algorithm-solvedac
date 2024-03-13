// problem: Climbing Worm
// id: 24805
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, h;
    cin >> a >> b >> h;
    int cnt = 0, c = 0;
    while (true)
    {
        c += a;
        cnt++;
        if (c >= h)
            break;
        c -= b;
    }
    cout << cnt;

    return 0;
}