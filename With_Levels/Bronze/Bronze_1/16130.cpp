// problem: 벌점 (DemeritPoints)
// id: 16130
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
        int a = 0, ans = 0, t, sts = 0;
        for (auto i : s)
        {
            if (isalpha(i))
                t = i - 'A' + 10;
            else
                t = i - '0';
            if (a / 10 < (a + t) / 10)
            {
                if ((a + t) / 10 == 4)
                {
                    sts = 1;
                    break;
                }
                else if ((a + t) / 10 > 4)
                {
                    sts = 2;
                    break;
                }
                ans += (a + t) / 10;
            }
            a += t;
        }
        if (sts == 1)
            cout << ans << "(weapon)\n";
        else if (sts == 2)
            cout << ans << "(09)\n";
        else
            cout << ans << '\n';
    }

    return 0;
}