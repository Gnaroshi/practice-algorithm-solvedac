// problem: The Seven Percent Solution
// id: 4606
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (true)
    {
        getline(cin, s);
        if (s == "#")
            break;
        for (auto i : s)
        {
            if (i == ' ')
                cout << "%20";
            else if (i == '!')
                cout << "%21";
            else if (i == '$')
                cout << "%24";
            else if (i == '%')
                cout << "%25";
            else if (i == '(')
                cout << "%28";
            else if (i == ')')
                cout << "%29";
            else if (i == '*')
                cout << "%2a";
            else
                cout << i;
        }
        cout << '\n';
    }

    return 0;
}