// problem: Palindromy
// id: 8804
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
        string s, t = "";
        cin >> s;
        bool chk = true;
        int sl = s.length(), iter = sl / 2;

        for (int i = 0; i < iter; i++)
        {
            if (s[i] != s[sl - i - 1])
            {
                chk = false;
                break;
            }
        }
        cout << (chk ? 1 : 2) << '\n';
    }

    return 0;
}