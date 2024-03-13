// problem: 관리자는 누구?
// id: 14724
// time taken:
#include <bits/stdc++.h>
using namespace std;
string cl[9] = {"PROBRAIN", "GROW", "ARGOS", "ADMIN", "ANT", "MOTION", "SPG", "COMON", "ALMIGHTY"};
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    int cmx[9];
    cin >> n;
    for (int i = 0; i < 9; i++)
    {
        int tmx = -1;
        for (int j = 0; j < n; j++)
        {
            cin >> t;
            tmx = max(t, tmx);
        }
        cmx[i] = tmx;
    }
    int mx = -1, loc;
    for (int i = 0; i < 9; i++)
    {
        if (cmx[i] > mx)
        {
            mx = cmx[i];
            loc = i;
        }
    }
    cout << cl[loc];

    return 0;
}