// problem: Caesar Word Salad
// id: 20355
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 0;
    string s;
    cin >> s;

    for (int i = 0; i < 26; i++)
    {
        bool chk = true;
        for (auto j : s)
        {
            if ((j - 'a' + i) % 26 + 'a' == 'i')
            {
                chk = false;
                break;
            }
        }
        cnt += chk;
    }
    if (cnt)
        cout << cnt;
    else
        cout << "impossible";

    return 0;
}