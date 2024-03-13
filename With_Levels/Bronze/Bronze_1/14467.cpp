// problem: 소가 길을 건너간 이유 1
// id: 14467
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0, cow, pos;
    bool *app = new bool[101];
    bool *chk = new bool[101];
    fill(app, app + 101, 0);
    fill(chk, chk + 101, 0);
    cin >> n;
    while (n--)
    {
        cin >> cow >> pos;
        if (app[cow] == 1)
        {
            if (chk[cow] != pos)
            {
                ans++;
                chk[cow] = pos;
            }
        }
        else
            chk[cow] = pos, app[cow] = 1;
    }
    cout << ans << '\n';

    return 0;
}