// problem: Numbersrebmun
// id: 4141
// time taken:
#include <bits/stdc++.h>
using namespace std;
string al[9] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s, cr;
        vector<int> v;
        cin >> s;
        int iter = s.length();
        for (int i = 0; i < iter; i++)
            s[i] = toupper(s[i]);
        for (int i = 0; i < iter; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cr = al[j];
                if (cr.find(s[i]) != string::npos)
                {
                    v.push_back(j + 2);
                    break;
                }
            }
        }
        bool chk = true;
        for (int i = 0; i < iter / 2; i++)
        {
            if (v[i] != v[iter - i - 1])
            {
                chk = false;
                break;
            }
        }
        cout << (chk ? "YES" : "NO") << '\n';
    }

    return 0;
}