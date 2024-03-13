// problem: Keystroke
// id: 20268
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
        int m, n, t;
        cin >> m >> n;
        for (int i = 0; i < m; i++)
            cin >> t;
        for (int i = 0; i < n; i++)
            cin >> t;
        cout << (m + n == 4 ? 7 : 1) << '\n';
    }
    return 0;
}