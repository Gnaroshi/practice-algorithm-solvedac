// problem: Revisão de Contrato
// id: 13658
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char c;
    string s;
    while (true)
    {
        cin >> c >> s;
        if (c == '0' && s == "0")
            break;
        string t = "";
        int iter = s.length();
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == c)
                continue;
            t.push_back(s[i]);
        }
        iter = t.length();
        bool chk = false;
        for (int i = 0; i < iter; i++)
        {
            if (t[i] != '0')
                chk = true;
            if (chk)
                cout << t[i];
        }
        if (!chk)
            cout << '0';
        cout << '\n';
    }

    return 0;
}