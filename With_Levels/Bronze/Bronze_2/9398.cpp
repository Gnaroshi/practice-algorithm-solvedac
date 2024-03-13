// problem: A Password Policy Requirement
// id: 9398
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool chk(string s)
{
    int iter = s.length();
    bool u = false, l = false, bd = false;
    for (int i = 0; i < iter; i++)
    {
        if (isupper(s[i]))
            u = true;
        else if (islower(s[i]))
            l = true;
        else if (!isalpha(s[i]))
            bd = true;
        if (u && l && bd)
            break;
    }
    return u && l && bd;
}

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
        int iter = s.length() - 5, mn = 0x3f3f3f3f;
        bool fnd = false;
        for (int i = 0; i < iter; i++)
        {
            for (int j = 0; j < iter - i; j++)
            {
                if (chk(s.substr(i, 6 + j)))
                {
                    fnd = true;
                    mn = min(6 + j, mn);
                }
            }
        }
        if (fnd)
            cout << mn << '\n';
        else
            cout << 0 << '\n';
    }

    return 0;
}