// problem: The Game
// id: 21880
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, a = 0, b = 0, k, m;
    cin >> x >> y;
    k = x + y - 1;
    m = max(x, y);
    for (int i = 0; i < k; i++)
    {
        if (a + 1 < m && a < x)
            a++;
        else
            b++;
        cout << a << ":" << b << "\n";
    }
    if (m == x)
        cout << ++a << ":" << b << "\n";
    else
        cout << a << ":" << ++b << "\n";

    return 0;
}