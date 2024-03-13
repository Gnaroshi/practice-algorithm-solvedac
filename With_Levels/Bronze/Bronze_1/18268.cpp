// problem: Cow Gymnastics
// id: 18268
// time taken:
#include <bits/stdc++.h>
using namespace std;

int cw[11][21];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n, cnt = 0, t;
    cin >> k >> n;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> t;
            cw[i][t] = j;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                continue;
            bool chk = true;
            for (int c = 0; c < k; c++)
            {
                if (cw[c][i] > cw[c][j])
                    chk = false;
            }
            if (chk)
                cnt++;
        }
    }
    cout << cnt;

    return 0;
}