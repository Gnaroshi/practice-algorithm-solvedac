// problem: 주사위 네개
// id: 2484
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    int mx = -1;
    while (tc--)
    {
        int n[4];
        int chk = -1;
        for (int i = 0; i < 4; i++)
            cin >> n[i];
        sort(n, n + 4);
        for (int i = 0; i < 4; i++)
        {
            int sm = n[i], t = 0;
            for (int j = i + 1; j < 4; j++)
            {
                if (sm == n[j])
                    t++;
            }
            if (t > chk)
                chk = t;
        }
        int s = 0;
        if (chk == 3)
            s = 50000 + n[0] * 5000;
        else if (chk == 2)
            s = 10000 + n[1] * 1000;
        else if (chk == 1)
        {
            if (n[0] == n[1] && n[2] == n[3])
            {
                s = 2000 + (n[0] + n[2]) * 500;
            }
            else
            {
                bool fnd = false;
                for (int i = 0; i < 4; i++)
                {
                    if (fnd)
                        break;
                    for (int j = i + 1; j < 4; j++)
                    {
                        if (n[i] == n[j])
                        {
                            s = 1000 + n[i] * 100;
                            fnd = true;
                            break;
                        }
                    }
                }
            }
        }
        else
            s = n[3] * 100;
        mx = max(s, mx);
    }
    cout << mx;

    return 0;
}