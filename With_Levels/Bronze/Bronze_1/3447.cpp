// problem: 버그왕
// id: 3447
// tag:
// time taken:

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    string s;
    string b = "BUG";
    while (getline(cin, s))
    {
        int cur = 0, l = s.length();
        if (s.length() == 0)
        {
            cout << '\n';
            continue;
        }
        string t = "";
        for (int i = 0; i < l; i++)
        {
            if (i < l - 2)
            {
                if (s.substr(i, 3) == b)
                {
                    i += 2;
                    continue;
                }
            }
            t += s[i];
        }
        cout << t << "\n";
    }

    return 0;
}
