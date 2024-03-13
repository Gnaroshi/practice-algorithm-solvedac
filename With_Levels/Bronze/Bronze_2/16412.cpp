// problem: Heir’s Dilemma
// id: 16412
// time taken:
#include <bits/stdc++.h>
using namespace std;
const int LEN = 6;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, h;
    cin >> l >> h;
    int cnt = 0;
    for (int i = l; i <= h; i++)
    {
        string t = to_string(i);
        bool chk = true;
        for (int j = 0; j < LEN; j++)
        {
            if (!chk)
                break;
            char cur = t[j];
            if (cur == '0')
            {
                chk = false;
                break;
            }
            for (int k = 0; k < LEN; k++)
            {
                if (k == j)
                    continue;
                if (cur == t[k])
                {
                    chk = false;
                    break;
                }
            }
            if (i % (t[j] - '0') != 0)
                chk = false;
        }
        if (chk)
            cnt++;
    }
    cout << cnt;

    return 0;
}