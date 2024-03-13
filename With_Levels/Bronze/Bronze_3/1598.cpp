#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    int ax, ay, bx, by;
    ax = (a - 1) % 4;
    ay = (a - ax) / 4;
    bx = (b - 1) % 4;
    by = (b - bx) / 4;
    cout << abs(ax - bx) + abs(ay - by) << '\n';

    return 0;
}