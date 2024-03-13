// problem: Suspicious Event
// id: 27622
// time taken:
#include <bits/stdc++.h>
using namespace std;

bool chk[1001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t > 0)
            chk[t] = 1;
        else
        {
            if (chk[abs(t)])
                chk[abs(t)] = 0;
            else
                ans++;
        }
    }
    cout << ans;

    return 0;
}