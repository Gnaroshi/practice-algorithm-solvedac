// problem: The Brave Sir Robin’s cAsE cOrReCtOr
// id: 9160
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool chkpqe(char c)
{
    return (c == '.' || c == '?' || c == '!');
}

bool chksp(char c)
{
    return (c == ' ' || c == '(' || c == ')');
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    bool chk = false;
    while (getline(cin, s))
    {
        int iter = s.length();
        for (int loc = 0; loc < iter; loc++)
        {
            if (loc == 0 && chk)
            {
                while (chksp(s[loc]))
                {
                    loc++;
                    if (loc >= iter)
                        break;
                }
                s[loc] = toupper(s[loc]);
            }
            else if (chkpqe(s[loc]))
            {
                loc++;
                while (chksp(s[loc]))
                {
                    loc++;
                    if (loc >= iter)
                        break;
                }
                s[loc] = toupper(s[loc]);
            }
            else
                s[loc] = tolower(s[loc]);
        }
        cout << s;
        cout << '\n';
        chk = true;
    }

    return 0;
}