// problem: Odd Gnome
// id: 15429
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
        int n;
        cin >> n;
        int bef = -1, t;
        bool fnd = true;
        for (int i = 1; i <= n; i++)
        {
            cin >> t;
            if (fnd && bef + 1 != t && i != 1)
            {
                cout << i << '\n';
                fnd = !fnd;
            }
            bef = t;
        }
    }

    return 0;
}