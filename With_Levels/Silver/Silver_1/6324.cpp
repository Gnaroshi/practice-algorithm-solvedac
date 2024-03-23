// problem: URLs
// id: 6324
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cin.ignore();
    string s;
    string p[4] = {"Protocol ", "Host     ", "Port     ", "Path     "};

    for (int tcc = 1; tcc <= tc; tcc++)
    {
        bool chk[4] = {0};
        vector<string> v(4);
        fill(v.begin(), v.end(), "");
        getline(cin, s);
        int l = s.length();
        string t = "";
        for (int i = 0; i < l; i++)
        {
            if (s[i] == ':')
            {
                if (chk[0] == 0 && i + 2 < l)
                {
                    if (s[i + 1] == s[i + 2] && s[i + 1] == '/')
                    {
                        v[0] = t;
                        chk[0] = 1;
                        i += 2;
                        t = "";
                    }
                }
                else if (chk[2] == 0)
                {
                    if (t != "" && chk[1] == 0)
                    {
                        chk[1] = 1;
                        v[1] = t;
                        t = "";
                    }
                    bool isd = true;
                    int j;
                    for (j = 1;; j++)
                    {
                        if (i + j == l)
                            break;
                        if (isdigit(s[i + j]))
                            t += s[i + j];
                        else
                            break;
                    }
                    v[2] = t;
                    chk[2] = 1;
                    i += j - 1;
                    t = "";
                }
            }
            else if (chk[3] == 0 && s[i] == '/')
            {
                if (chk[1] == 0)
                {
                    chk[1] = 1;
                    v[1] = t;
                }
                t = s.substr(i + 1);
                v[3] = t;
                chk[3] = 1;
                i += t.length();
                t = "";
            }
            else
                t += s[i];
        }
        if (t != "")
        {
            chk[1] = 1;
            v[1] = t;
        }
        cout << "URL #" << tcc << "\n";
        for (int i = 0; i < 4; i++)
            cout << p[i] << "= " << (chk[i] ? v[i] : "<default>") << '\n';
        cout << "\n";
    }

    return 0;
}