// problem: Soundex
// id: 4402
// time taken:
#include <bits/stdc++.h>
using namespace std;

string sd[7] = {"AEIOUHWY", "BFPV", "CGJKQSXZ", "DT", "L", "MN", "R"};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, ret, t;
    char c;
    int iter;
    while (getline(cin, s))
    {
        ret = t = "";
        for (auto i : s)
        {
            for (int j = 0; j < 7; j++)
            {
                if (sd[j].find(i) != string::npos)
                {
                    ret += char('0' + j);
                    break;
                }
            }
        }
        iter = ret.length();
        c = 'a';
        for (int i = 0; i < iter; i++)
        {
            if (ret[i] != '0' && ret[i] != c)
                t += ret[i];
            c = ret[i];
        }
        if (t != "0")
            cout << t;
        cout << '\n';
    }

    return 0;
}