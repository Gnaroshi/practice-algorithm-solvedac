// problem: Password check
// id: 15239
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    char ss[18] = {'+', '_', ')', '(', '*', '&', '^', '%', '$', '#', '@', '!', '.', '/', ',', ';', '{', '}'};
    while (tc--)
    {
        int n;
        string s;
        cin >> n >> s;
        int iter = s.length();
        bool chk[4] = {0};
        if (iter < 12)
        {
            cout << "invalid\n";
            continue;
        }
        for (int i = 0; i < iter; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                chk[0] = 1;
            if (s[i] >= 'A' && s[i] <= 'Z')
                chk[1] = 1;
            if (s[i] >= '0' && s[i] <= '9')
                chk[2] = 1;
            for (int j = 0; j < 18; j++)
            {
                if (s[i] == ss[j])
                {
                    chk[3] = 1;
                    break;
                }
            }
        }
        bool val = true;
        for (int i = 0; i < 4; i++)
        {
            if (!chk[i])
            {
                val = false;
                break;
            }
        }
        if (val)
            cout << "valid\n";
        else
            cout << "invalid\n";
    }

    return 0;
}