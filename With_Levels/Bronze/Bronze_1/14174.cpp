// problem: Block Game
// id: 14174
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt[26] = {0}, acnt[26], bcnt[26];
    cin >> n;
    string a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        fill(acnt, acnt + 26, 0);
        fill(bcnt, bcnt + 26, 0);
        for (auto j : a)
            acnt[j - 'a']++;
        for (auto j : b)
            bcnt[j - 'a']++;
        for (int j = 0; j < 26; j++)
            cnt[j] += max(acnt[j], bcnt[j]);
    }
    for (int i = 0; i < 26; i++)
        cout << cnt[i] << "\n";

    return 0;
}