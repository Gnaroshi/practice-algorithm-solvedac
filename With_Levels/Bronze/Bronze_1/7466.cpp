// problem: Honey and Milk Land
// id: 7466
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, e, s1 = 0, s2 = 0, t;
    cin >> n >> e;
    for (int i = 1; i < n; i++)
    {
        cin >> t;
        s1 += t;
    }
    for (int i = 1; i < e; i++)
    {
        cin >> t;
        s2 += t;
    }
    if (n == e && n == 1)
        cout << 0 << '\n';
    else if (n == 1 || e == 1)
        cout << s1 + s2 << '\n';
    else
        cout << int(sqrt(s1 * s1 + s2 * s2 - 1)) + 1 << '\n';

    return 0;
}