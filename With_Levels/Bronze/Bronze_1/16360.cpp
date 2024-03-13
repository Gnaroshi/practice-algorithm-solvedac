// problem: Go Latin
// id: 16360
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        int iter = s.length();
        char c = s.back();
        if (iter >= 2 && c == 'e')
        {
            if (s[iter - 2] == 'n')
            {
                cout << s.substr(0, iter - 2) << "anes\n";
                continue;
            }
        }
        if (c == 'a')
            cout << s.substr(0, iter - 1) << "as";
        else if (c == 'i' || c == 'y')
            cout << s.substr(0, iter - 1) << "ios";
        else if (c == 'l')
            cout << s.substr(0, iter - 1) << "les";
        else if (c == 'n')
            cout << s.substr(0, iter - 1) << "anes";
        else if (c == 'o')
            cout << s.substr(0, iter - 1) << "os";
        else if (c == 'r')
            cout << s.substr(0, iter - 1) << "res";
        else if (c == 't')
            cout << s.substr(0, iter - 1) << "tas";
        else if (c == 'u')
            cout << s.substr(0, iter - 1) << "us";
        else if (c == 'v')
            cout << s.substr(0, iter - 1) << "ves";
        else if (c == 'w')
            cout << s.substr(0, iter - 1) << "was";
        else
            cout << s << "us";
        cout << '\n';
    }

    return 0;
}