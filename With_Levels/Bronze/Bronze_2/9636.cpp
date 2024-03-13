// problem: NASSA’s Robot
// id: 9636
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
        string s;
        cin >> s;
        int u, r, d, l, q;
        u = r = d = l = q = 0;
        for (auto i : s)
        {
            if (i == 'U')
                u++;
            else if (i == 'R')
                r++;
            else if (i == 'D')
                d++;
            else if (i == 'L')
                l++;
            else
                q++;
        }
        cout << r - l - q << ' ' << u - d - q << ' ' << r - l + q << ' ' << u - d + q << '\n';
    }

    return 0;
}