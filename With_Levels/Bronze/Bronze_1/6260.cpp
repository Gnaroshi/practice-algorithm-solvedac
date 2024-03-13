// problem: Encrypted SMS
// id: 6260
// time taken:
#include <bits/stdc++.h>
using namespace std;

string ph[26] = {
    "cba", "acb", "bac",
    "fed", "dfe", "edf",
    "ihg", "gih", "hgi",
    "lkj", "jlk", "kjl",
    "onm", "mon", "nmo",
    "srqp", "psrq", "qpsr", "rqps",
    "vut", "tvu", "utv",
    "zyxw", "wzyx", "xwzy", "yxwz"};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (true)
    {
        cin >> s;
        if (s == "#")
            break;
        int iter = s.length();
        for (int i = 0; i < iter; i++)
        {
            if (islower(s[i]))
                cout << char(ph[s[i] - 'a'][i % ph[s[i] - 'a'].length()]);
            else
                cout << char(toupper(ph[s[i] - 'A'][i % ph[s[i] - 'A'].length()]));
        }
        cout << '\n';
    }

    return 0;
}