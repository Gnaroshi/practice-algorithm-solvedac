// problem: Periods
// id: 26560
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
    while (tc--)
    {
        string s;
        getline(cin, s);
        if (s[s.length() - 1] == '.')
            cout << s << '\n';
        else
            cout << s << '.' << '\n';
    }

    return 0;
}
