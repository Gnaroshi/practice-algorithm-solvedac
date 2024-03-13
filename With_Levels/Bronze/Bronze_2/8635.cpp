// problem: Zliczacz liter
// id: 8635
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int la[26] = {0};
    int ua[26] = {0};
    int n, iter;
    cin >> n;
    cin.ignore();
    string s;
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        iter = s.length();
        for (int j = 0; j < iter; j++)
        {
            if (s[j] >= 'a' && s[j] <= 'z')
                la[s[j] - 'a']++;
            else if (s[j] != ' ')
                ua[s[j] - 'A']++;
        }
    }
    for (int i = 0; i < 26; i++)
        if (la[i])
            cout << char('a' + i) << ' ' << la[i] << '\n';
    for (int i = 0; i < 26; i++)
        if (ua[i])
            cout << char('A' + i) << ' ' << ua[i] << '\n';

    return 0;
}