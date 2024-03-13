// problem: Футбол
// id: 29297
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
        int l, d, a = 0, b = 0;
        cin >> s;
        l = s[0] - '0', d = s[2] - '0';
        bool chk = false;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (i + l > j + d)
                    a++;
                else if (i + l < j + d)
                    b++;
                else
                {
                    if (i > d)
                        a++;
                    else if (i < d)
                        b++;
                }
            }
        }
        cout << a << ' ' << b << '\n';
    }

    return 0;
}