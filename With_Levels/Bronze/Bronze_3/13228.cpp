// problem: The REAL Manhattan distance
// id: 13228
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int x1, y1, z1, x2, y2, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        cout << abs(x1 - x2) + abs(y1 - y2) + abs(z1 + z2) << '\n';
    }

    return 0;
}