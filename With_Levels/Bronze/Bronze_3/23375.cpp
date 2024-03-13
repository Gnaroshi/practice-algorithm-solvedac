// problem: Arm Coordination
// id: 23375
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, r;
    cin >> x >> y >> r;
    cout << x + r << ' ' << y + r << '\n';
    cout << x + r << ' ' << y - r << '\n';
    cout << x - r << ' ' << y - r << '\n';
    cout << x - r << ' ' << y + r << '\n';

    return 0;
}