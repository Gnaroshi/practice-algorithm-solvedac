// problem: New Password
// id: 26416
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        int n;
        string s;
        cin >> n >> s;
        bool chk[4];
        fill(chk, chk + 4, true);
        for (auto i : s)
        {
            if (isalpha(i))
            {
                if (isupper(i))
                    chk[0] = false;
                else
                    chk[1] = false;
            }
            else
            {
                if (isdigit(i))
                    chk[2] = false;
                else
                    chk[3] = false;
            }
        }
        if (chk[0])
            s += 'A';
        if (chk[1])
            s += 'a';
        if (chk[2])
            s += '1';
        if (chk[3])
            s += '#';
        if (s.length() < 7)
        {
            int iter = 7 - s.length();
            for (int i = 0; i < iter; i++)
                s += 'a';
        }
        cout << "Case #" << tcc << ": " << s << '\n';
    }

    return 0;
}