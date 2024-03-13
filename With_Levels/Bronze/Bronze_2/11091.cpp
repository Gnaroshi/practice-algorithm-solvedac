// problem: 알파벳 전부 쓰기
// id: 11091
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
        bool al[26] = {0};
        bool chk = true;
        string s;
        getline(cin, s);
        int iter = s.length();
        for (int i = 0; i < iter; i++)
        {
            if (isalpha(s[i]))
            {
                char cur = tolower(s[i]);
                al[cur - 'a'] = 1;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (!al[i])
            {
                chk = false;
                break;
            }
        }
        if (chk)
            cout << "pangram";
        else
        {
            cout << "missing ";
            for (int i = 0; i < 26; i++)
            {
                if (!al[i])
                    cout << char(i + 'a');
            }
        }
        cout << '\n';
    }

    return 0;
}