// problem: Die
// id: 16337
// time taken:
#include <bits/stdc++.h>
using namespace std;
int n[3][3];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 0;
    string s;
    for (int i = 0; i < 3; i++)
    {
        cin >> s;
        for (int j = 0; j < 3; j++)
        {
            if (s[j] == 'o')
            {
                n[i][j] = 1;
                cnt++;
            }
        }
    }

    //    0 1 2
    // 0  0 1 2
    // 1  3 4 5
    // 2  6 7 8

    bool fnd = false;
    if (cnt == 1)
    {
        if (n[1][1] == 1)
            fnd = true;
    }
    else if (cnt == 2)
    {
        if ((n[0][0] == n[2][2] && n[0][0] == 1) ||
            (n[0][2] == n[2][0] && n[0][2] == 1))
            fnd = true;
    }
    else if (cnt == 3)
    {
        if ((n[0][0] == 1 && n[0][0] == n[1][1] && n[0][0] == n[2][2]) ||
            (n[0][2] == 1 && n[0][2] == n[1][1] && n[0][2] == n[2][0]))
            fnd = true;
    }
    else if (cnt == 4)
    {
        if (n[0][0] == 1 && n[0][0] == n[0][2] &&
            n[0][0] == n[2][0] && n[0][0] == n[2][2])
            fnd = true;
    }
    else if (cnt == 5)
    {
        fnd = true;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if ((i * 3 + j) % 2 == 0)
                {
                    if (n[i][j] == 0)
                        fnd = false;
                }
            }
        }
    }
    else if (cnt == 6)
    {
        if (n[1][0] == 0 && n[1][1] == 0 && n[1][2] == 0)
            fnd = true;
        else if (n[0][1] == 0 && n[1][1] == 0 && n[2][1] == 0)
            fnd = true;
    }
    if (fnd)
        cout << cnt;
    else
        cout << "unknown";
    return 0;
}