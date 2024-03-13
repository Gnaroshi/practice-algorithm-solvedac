// problem: 직육면체 교집합
// id: 11665
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, tx1, ty1, tz1, tx2, ty2, tz2;
    int x1, y1, z1, x2, y2, z2;
    x1 = y1 = z1 = 0;
    x2 = y2 = z2 = 1000;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tx1 >> ty1 >> tz1 >> tx2 >> ty2 >> tz2;
        x1 = max(tx1, x1);
        y1 = max(ty1, y1);
        z1 = max(tz1, z1);
        x2 = min(tx2, x2);
        y2 = min(ty2, y2);
        z2 = min(tz2, z2);
    }

    cout << max(0, (x2 - x1)) * max(0, (y2 - y1)) * max(0, (z2 - z1));

    return 0;
}