// problem: Window on the Wall
// id: 25869
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w, h, d;
    cin >> w >> h >> d;
    if (w > 2 * d && h > 2 * d)
        cout << (w - 2 * d) * (h - 2 * d);
    else
        cout << 0;

    return 0;
}