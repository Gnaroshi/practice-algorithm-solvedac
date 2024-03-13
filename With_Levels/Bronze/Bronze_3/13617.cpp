// problem: Handebol
// id: 13617
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, t;
    cin >> n >> m;
    int ans = 0;
    bool chk = true;
    for (int i = 0; i < n; i++)
    {
        chk = true;
        for (int j = 0; j < m; j++)
        {
            cin >> t;
            if (t == 0)
                chk = false;
        }
        if (chk)
            ans++;
    }
    cout << ans;

    return 0;
}
