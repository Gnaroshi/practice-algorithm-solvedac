#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int cnt[26];
    fill(cnt, cnt + 26, 0);
    char temp;
    while ((temp = getchar()) != EOF)
    {
        if (temp != ' ' && temp != '\n')
            cnt[temp - 'a']++;
    }
    int mx = 0;
    int mx_loc = 0;
    for (int i = 0; i < 26; i++)
    {
        if (mx < cnt[i])
        {
            mx = cnt[i];
            mx_loc = i;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (mx == cnt[i])
        {
            cout << char(i + 'a');
        }
    }
    cout << '\n';
    return 0;
}