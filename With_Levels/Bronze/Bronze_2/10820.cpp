// problem: 문자열 분석
// id: 10820
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    while (getline(cin, s))
    {
        int la = 0, ua = 0, sp = 0, nu = 0, iter = s.length();
        for (int i = 0; i < iter; i++)
        {
            if (isalpha(s[i]))
            {
                if (isupper(s[i]))
                    ua++;
                else
                    la++;
            }
            else
            {
                if (s[i] == ' ')
                    sp++;
                else
                    nu++;
            }
        }
        cout << la << ' ' << ua << ' ' << nu << ' ' << sp << '\n';
    }

    return 0;
}