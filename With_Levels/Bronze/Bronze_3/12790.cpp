// problem: Mini Fantasy War
// id: 12790
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
        int a, b, c, d, t;
        cin >> a >> b >> c >> d;
        cin >> t;
        a += t;
        cin >> t;
        b += t;
        cin >> t;
        c += t;
        cin >> t;
        d += t;
        cout << max(1, a) + 5 * max(1, b) + 2 * (max(0, c)) + 2 * d << '\n';
    }

    return 0;
}