// problem: 이상한 암호코드
// id: 18129
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int k, iter, cl = 1;
    cin >> s >> k;
    iter = s.length();
    bool chk[26];
    fill(chk, chk + 26, 1);
    for (auto &i : s)
        i = tolower(i);
    char bef = s[0];
    for (int i = 1; i < iter; i++)
    {
        if (bef != s[i])
        {
            if (chk[bef - 'a'])
            {
                chk[bef - 'a'] = 0;
                if (cl >= k)
                    cout << 1;
                else
                    cout << 0;
                cl = 1;
            }
        }
        else
            cl++;
        bef = s[i];
    }
    if (chk[bef - 'a'])
    {
        if (cl >= k)
            cout << 1;
        else
            cout << 0;
    }

    return 0;
}
