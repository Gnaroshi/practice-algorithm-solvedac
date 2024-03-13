// problem: Exactly Electrical
// id: 14683
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, t, dif;
    cin >> a >> b >> c >> d >> t;
    dif = abs(a - c) + abs(b - d);

    if (dif <= t && dif % 2 == t % 2)
        cout << "Y";
    else
        cout << "N";

    return 0;
}