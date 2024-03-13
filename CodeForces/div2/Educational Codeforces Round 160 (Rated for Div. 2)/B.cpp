// problem: Swap and Delete
// id:
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
        int a = 0, b = 0, ta, tb, iter = s.length(), ans = iter, m;
        for (auto i : s)
        {
            if (i == '1')
                a++;
            else
                b++;
        }
        if (a == b)
        {
            cout << 0 << '\n';
            continue;
        }
        ta = b, tb = a;
        for (int i = iter - 1; i >= 0; i--)
        {
            if (s[i] == '1')
                a--;
            else
                b--;

            if (ta >= a && tb >= b)
            {
                ans = iter - i;
                break;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}