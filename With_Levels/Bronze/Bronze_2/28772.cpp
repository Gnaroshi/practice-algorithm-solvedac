// problem: Подсчет хештегов
// id: 28772
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    map<string, int> m;
    while (cin >> s)
    {
        if (s.length() > 1 && s[0] == '#' && s.substr(1, s.length() - 1).find('#') == string::npos)
        {
            if (m.find(s) != m.end())
                m[s]++;
            else
                m[s] = 1;
        }
    }
    cout << m.size() << '\n';
    for (map<string, int>::iterator i = m.begin(); i != m.end(); i++)
    {
        cout << (i->first) << ' ' << (i->second) << '\n';
    }

    return 0;
}