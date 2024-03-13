#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int brth[3];
    int dte[3];

    for (int i = 0; i < 3; i++)
        cin >> brth[i];
    for (int i = 0; i < 3; i++)
        cin >> dte[i];

    int mannai, senai, yeonnai;

    if (dte[0] > brth[0])
    {
        if (dte[1] > brth[1] || (dte[1] == brth[1] && dte[2] >= brth[2]))
        {
            mannai = dte[0] - brth[0];
        }
        else
        {
            mannai = dte[0] - brth[0] - 1;
        }
        senai = dte[0] - brth[0] + 1;
        yeonnai = dte[0] - brth[0];
    }
    else
    {
        mannai = 0;
        senai = 1;
        yeonnai = 0;
    }
    cout << mannai << '\n';
    cout << senai << '\n';
    cout << yeonnai << '\n';

    return 0;
}