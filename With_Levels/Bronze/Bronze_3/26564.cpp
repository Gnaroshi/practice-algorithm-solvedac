// problem: Poker Hand
// id: 26564
// time taken:
#include <bits/stdc++.h>
using namespace std;

char r[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int cnt[13] = {0};
        string s;
        for (int i = 0; i < 5; i++)
        {
            cin >> s;
            for (int j = 0; j < 13; j++)
            {
                if (s[0] == r[j])
                {
                    cnt[j]++;
                    break;
                }
            }
        }
        int mx = -1;
        for (int i = 0; i < 13; i++)
            mx = max(mx, cnt[i]);
        cout << mx << '\n';
    }

    return 0;
}