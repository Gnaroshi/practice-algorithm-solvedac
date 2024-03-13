// problem: 태보태보 총난타
// id: 17249
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int lc = 0, rc = 0, iter = s.length();
    bool chk = true;
    for (int i = 0; i < iter; i++)
    {
        if (s[i] == '(')
        {
            chk = false;
            i += 4;
        }
        if (s[i] == '@')
        {
            if (chk)
                lc++;
            else
                rc++;
        }
    }
    cout << lc << ' ' << rc;
    return 0;
}