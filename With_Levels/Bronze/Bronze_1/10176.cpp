// problem: Opposite Words
// id: 10176
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
        bool chk[26] = {0};
        for (auto i : s)
        {
            if (isalpha(i))
                chk[tolower(i) - 'a'] = 1;
        }
        bool ans = true;
        for (int i = 0; i < 13; i++)
        {
            if (chk[i] != chk[26 - i - 1])
            {
                ans = false;
                break;
            }
        }
        cout << (ans ? "Yes\n" : "No\n");
    }

    return 0;
}