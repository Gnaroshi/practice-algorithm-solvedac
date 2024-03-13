// problem: Is the Name of This Problem
// id: 4566
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, a, b, t;
    while (true)
    {
        getline(cin, s);
        if (s == "END")
            break;
        int iter = s.length();
        bool chk = true;

        int l, r, cnt = 0;
        l = r = -1;
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == '\"')
                cnt++;
            if (l == -1 && s[i] == '\"')
                l = i;
            else if (l != -1 && s[i] == '\"')
                r = i;
        }
        if (cnt != 2 || l != 0)
            chk = false;
        else if (l + 1 == r && iter == r + 2)
            cout << "Quine()\n";
        else if (iter <= r + 2)
            chk = false;
        else if (r + 1 < iter && s[r + 1] != ' ')
            chk = false;
        else
        {
            a = s.substr(l + 1, r - 1);
            b = s.substr(r + 2);
            if (a == b)
                cout << "Quine(" << a << ")\n";
            else
                chk = false;
        }
        if (!chk)
            cout << "not a quine\n";
    }

    return 0;
}