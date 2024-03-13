// problem: Poker Hand
// id: 16408
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt[13] = {0};
    for (int i = 0; i < 5; i++)
    {
        string s;
        cin >> s;
        if (isalpha(s[0]))
        {
            if (s[0] == 'A')
                cnt[0]++;
            else if (s[0] == 'T')
                cnt[9]++;
            else if (s[0] == 'J')
                cnt[10]++;
            else if (s[0] == 'Q')
                cnt[11]++;
            else if (s[0] == 'K')
                cnt[12]++;
        }
        else
            cnt[s[0] - '1']++;
    }
    cout << *max_element(cnt, cnt + 13);

    return 0;
}