// problem: 팰린드롬 만들기
// id: 1213
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt[26] = {0};
    int ocnt[26] = {0};
    string s, ans = "";
    cin >> s;
    int iter = s.length();
    for (auto i : s)
        ocnt[i - 'A']++;
    for (int i = 0; i < 26; i++)
    {
        cnt[i] = ocnt[i] / 2;
        if (ocnt[i] % 2)
            ocnt[i] = 1;
        else
            ocnt[i] = 0;
    }

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < cnt[i]; j++)
            ans += char('A' + i);
    }
    for (int i = 25; i >= 0; i--)
    {
        for (int j = 0; j < cnt[i]; j++)
        {
            ans += char('A' + i);
        }
    }
    int tc = 0;
    bool chk = true;
    char md;
    for (int i = 0; i < 26; i++)
    {
        if (ocnt[i] == 1)
        {
            tc++;
            md = i;
        }
    }
    if (tc > 1)
        chk = false;
    if (chk)
    {
        if (tc == 1)
        {
            cout << ans.substr(0, iter / 2) << char('A' + md) << ans.substr(iter / 2, iter / 2);
        }
        else
            cout << ans;
    }
    else
        cout << "I'm Sorry Hansoo";

    return 0;
}