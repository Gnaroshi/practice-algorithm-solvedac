// problem: Teleportation
// id: 15751
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    cout << min(abs(b - a), min(abs(x - a) + abs(y - b), abs(x - b) + abs(y - a)));

    return 0;
}