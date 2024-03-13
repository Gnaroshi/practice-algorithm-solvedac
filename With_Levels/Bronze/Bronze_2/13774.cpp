// problem: Palindromes
// id: 13774
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, d;
    while (true)
    {
        cin >> s;
        if (s == "#")
            break;

        int iter = s.length(), ni, pos;
        bool chk = false;
        for (int i = 0; i < iter; i++)
        {
            d = s;
            d.erase(i, 1);
            ni = (iter - 1) / 2;
            bool fnd = true;
            for (int j = 0; j < ni; j++)
            {
                if (d[j] != d[iter - 2 - j])
                {
                    fnd = false;
                    break;
                }
            }
            if (fnd)
            {
                chk = true;
                pos = i;
                break;
            }
        }
        if (chk)
        {
            s.erase(pos, 1);
            cout << s << '\n';
        }
        else
            cout << "not possible\n";
    }

    return 0;
}