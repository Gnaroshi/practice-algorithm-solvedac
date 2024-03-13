// problem: Dance Dance Revolution
// id: 22686
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
        char bef = s[0];
        bool chk = true, r = false, l = false;
        if (bef == 'R')
            r = true;
        if (bef == 'L')
            l = true;

        int iter = s.length();
        for (int i = 1; i < iter; i++)
        {
            if (s[i] == 'R')
                r = true;
            if (s[i] == 'L')
                l = true;
            if (bef == s[i])
            {
                chk = false;
                break;
            }
            bef = s[i];
        }
        if (chk && l && r)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}