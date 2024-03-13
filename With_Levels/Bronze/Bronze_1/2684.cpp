// problem: 동전 게임
// id: 2684
// time taken:
#include <bits/stdc++.h>
using namespace std;

int cnt[8];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        fill(cnt, cnt + 8, 0);
        string s;
        cin >> s;
        for (int i = 2; i < 40; i++)
            cnt[((s[i] == 'H') + int(s[i - 1] == 'H') * 2 + int(s[i - 2] == 'H') * 4)]++;
        for (int i = 0; i < 8; i++)
            cout << cnt[i] << (i != 7 ? ' ' : '\n');
    }

    return 0;
}
