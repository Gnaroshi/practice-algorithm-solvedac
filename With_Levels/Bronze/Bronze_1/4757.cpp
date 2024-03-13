// problem: A Contesting Decision
// id: 4757
// time taken:
#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    string name;
    int sub[4], tm[4];
    int slv, pnt;
} team;

bool cmp(team a, team b)
{
    if (a.slv == b.slv)
        return a.pnt < b.pnt;
    return a.slv > b.slv;
}

team teams[1000000];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> teams[i].name;
        teams[i].slv = teams[i].pnt = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> teams[i].sub[j] >> teams[i].tm[j];
            if (teams[i].tm[j] != 0)
            {
                teams[i].slv++;
                teams[i].pnt += ((teams[i].sub[j] - 1) * 20 + teams[i].tm[j]);
            }
        }
    }

    sort(teams, teams + n, cmp);
    cout << teams[0].name << ' ' << teams[0].slv << ' ' << teams[0].pnt << '\n';

    return 0;
}