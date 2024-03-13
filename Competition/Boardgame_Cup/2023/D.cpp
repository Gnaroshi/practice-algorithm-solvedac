#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int dice[7];
    bool comb[13];
    fill(dice, dice + 7, 0);
    fill(comb, comb + 13, false);

    string s_input;
    cin >> s_input;

    for (int i = 0; i < 12; i++)
    {
        if (s_input[i] == 'Y')
            comb[i + 1] = true;
        else
            comb[i + 1] = false;
    }

    int ans = -1;

    for (int i = 0; i < 3; i++)
    {
        int temp;
        cin >> temp;
        dice[temp] += 1;
    }

    for (int i = 1; i <= 6; i++)
    {
        dice[i] += 1;
        for (int j = 1; j <= 6; j++)
        {
            dice[j] += 1;

            int temp = 0;
            if (comb[1])
            {
                temp = max(temp, dice[1] * 1);
            }
            if (comb[2])
            {
                temp = max(temp, dice[2] * 2);
            }
            if (comb[3])
            {
                temp = max(temp, dice[3] * 3);
            }
            if (comb[4])
            {
                temp = max(temp, dice[4] * 4);
            }
            if (comb[5])
            {
                temp = max(temp, dice[5] * 5);
            }
            if (comb[6])
            {
                temp = max(temp, dice[6] * 6);
            }
            if (comb[7])
            {
                for (int l = 1; l <= 6; l++)
                {
                    if (dice[l] >= 4)
                    {
                        temp = max(temp, dice[l] * 4);
                    }
                }
            }

            if (comb[8])
            {
                for (int l = 1; l <= 6; l++)
                {
                    if (dice[l] == 3)
                    {
                        for (int ll = 1; ll <= 6; ll++)
                        {
                            if (ll == l)
                                continue;
                            if (dice[ll] == 2)
                            {
                                temp = max(temp, l * 3 + ll * 2);
                            }
                        }
                    }
                }
            }

            if (comb[9])
            {
                bool flag = true;
                for (int l = 1; l <= 5; l++)
                {
                    if (dice[l] != 1)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                    temp = max(temp, 30);
            }

            if (comb[10])
            {
                bool flag = true;
                for (int l = 2; l <= 6; l++)
                {
                    if (dice[l] != 1)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                    temp = max(temp, 30);
            }

            if (comb[11])
            {
                for (int l = 1; l <= 6; l++)
                {
                    if (dice[l] == 5)
                        temp = 50;
                }
            }

            if (comb[12])
            {
                int tt = 0;
                for (int l = 1; l <= 6; l++)
                {
                    tt += dice[l] * l;
                }
                temp = max(temp, tt);
            }

            if (ans < temp)
            {
                ans = temp;
            }

            dice[j] -= 1;
        }
        dice[i] -= 1;
    }
    cout << ans << '\n';

    return 0;
}