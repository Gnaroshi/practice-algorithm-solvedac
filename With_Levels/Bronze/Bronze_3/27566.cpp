// problem: Blueberry Waffle
// id: 27566
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double r, f, t;
    cin >> r >> f;
    t = fmod(f / r * 180.0, 360.0);
    cout << ((t >= 90 && t <= 270) ? "down" : "up");

    return 0;
}