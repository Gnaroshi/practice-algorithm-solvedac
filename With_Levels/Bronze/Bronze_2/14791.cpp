// problem: Tidy Numbers (Large)
// id: 14791
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
        cout << "Case #" << tcc << ": ";
        string s;
        cin >> s;
        int iter = s.length();
        if (iter == 1)
            cout << s << '\n';
        else
        {
            bool fchk = true;
            char fbef = s[0];
            for (int i = 0; i < iter; i++)
            {
                if (s[i] < fbef)
                {
                    fchk = false;
                    break;
                }
                fbef = s[i];
            }
            if (fchk)
                cout << s << '\n';
            else
            {
                for (int i = iter - 2; i >= 0; i--)
                {
                    if (s[i] == '0')
                        continue;
                    s[i]--;
                    for (int j = i + 1; j < iter; j++)
                        s[j] = '9';
                    char bef = s[0];
                    bool chk = true;
                    for (int j = 0; j < iter; j++)
                    {
                        if (s[j] < bef)
                        {
                            chk = false;
                            break;
                        }
                        bef = s[j];
                    }
                    if (chk)
                        break;
                }
                int zc = 0;
                for (int i = 0; i < iter; i++)
                {
                    if (s[i] != '0')
                        break;
                    zc++;
                }
                s.erase(0, zc);
                cout << s << '\n';
            }
        }
    }

    return 0;
}
