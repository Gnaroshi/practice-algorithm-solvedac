// problem: Election
// id: 7692
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool cc[5];
int v[5], m[20], pr[20][5];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int g, n, a;
    while (true)
    {
        cin >> g >> n;
        if (g + n == 0)
            break;

        fill(cc, cc + n, 1);
        for (int i = 0; i < g; i++)
        {
            cin >> m[i];
            for (int j = 0; j < n; j++)
            {
                cin >> pr[i][j];
                pr[i][j] -= 1;
            }
        }

        int cur = n, tpr, lv;
        bool chk;
        while (cur > 1)
        {
            fill(v, v + n, 0);
            for (int i = 0; i < g; i++)
            {
                chk = false;
                for (int j = 0; j < n; j++)
                {
                    if (cc[pr[i][j]])
                    {
                        chk = true;
                        tpr = pr[i][j];
                        break;
                    }
                }
                if (chk)
                    v[tpr] += m[i];
                else
                    v[0] += m[i];
            }
            chk = false;
            for (int i = 0; i < n; i++)
            {
                if (cc[pr[0][i]])
                {
                    chk = true;
                    lv = pr[0][i];
                    break;
                }
            }
            if (!chk)
                lv = -1;
            for (int i = 0; i < n; i++)
            {
                if (cc[i])
                {
                    if (v[i] < v[lv])
                        lv = i;
                    else if (v[i] == v[lv])
                    {
                        if (i > lv)
                            lv = i;
                    }
                }
            }
            cc[lv] = false;
            cur--;
        }

        for (int i = 0; i < n; i++)
        {
            if (cc[pr[0][i]])
            {
                cout << pr[0][i] + 1 << '\n';
                break;
            }
        }
    }

    return 0;
}