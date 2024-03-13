// problem: Letter Count
// id: 15184
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt[26] = {0};
    string s;
    getline(cin, s);
    int iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        if (isalpha(s[i]))
        {
            s[i] = tolower(s[i]);
            cnt[s[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        cout << char('A' + i) << " | ";
        for (int j = 0; j < cnt[i]; j++)
            cout << '*';
        cout << '\n';
    }

    return 0;
}