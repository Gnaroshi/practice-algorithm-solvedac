// problem: AmeriCanadian
// id: 6917
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, v = "aeiouy";
    while (true)
    {
        cin >> s;
        if (s == "quit!")
            break;
        if (s.length() >= 4 && (s.substr(s.length() - 2, 2) == "or"))
        {
            char t = s[s.length() - 3];
            if (v.find(t) == string::npos)
                cout << s.substr(0, s.length() - 1) << "ur\n";
            else
                cout << s << '\n';
        }
        else
            cout << s << '\n';
    }

    return 0;
}