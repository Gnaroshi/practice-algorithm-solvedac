// problem: P,MTHBGWB
// id: 6368
// time taken:
#include <bits/stdc++.h>
using namespace std;

string ms[30] = {
    ".-",
    "-...",
    "-.-.",
    "-..",
    ".",
    "..-.",
    "--.",
    "....",
    "..",
    ".---",
    "-.-",
    ".-..",
    "--",
    "-.",
    "---",
    ".--.",
    "--.-",
    ".-.",
    "...",
    "-",
    "..-",
    "...-",
    ".--",
    "-..-",
    "-.--",
    "--..",

    "..--",
    "---.",

    ".-.-",
    "----",

};
// 26 _
// 27 .
// 28 ,
// 29 ?

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cin.ignore();
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << tcc << ": ";
        string s, t = "", sn = "";
        getline(cin, s);
        for (auto i : s)
        {
            if (isalpha(i))
            {
                t += ms[i - 'A'];
                sn += char(ms[i - 'A'].length() + '0');
            }
            else if (i == '_')
            {
                t += ms[26];
                sn += char(ms[26].length() + '0');
            }
            else if (i == '.')
            {
                t += ms[27];
                sn += char(ms[27].length() + '0');
            }
            else if (i == ',')
            {
                t += ms[28];
                sn += char(ms[28].length() + '0');
            }
            else if (i == '?')
            {
                t += ms[29];
                sn += char(ms[29].length() + '0');
            }
        }
        reverse(sn.begin(), sn.end());
        string c;
        int l, pos = 0;
        for (auto i : sn)
        {
            l = i - '0';
            c = t.substr(pos, l);
            for (int j = 0; j < 30; j++)
            {
                if (ms[j] == c)
                {
                    if (j < 26)
                        cout << char(j + 'A');
                    else if (j == 26)
                        cout << '_';
                    else if (j == 27)
                        cout << '.';
                    else if (j == 28)
                        cout << ',';
                    else
                        cout << '?';
                    break;
                }
            }
            pos += l;
        }
        cout << '\n';
    }

    return 0;
}