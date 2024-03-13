// problem: 双六 (Sugoroku)
// id: 15475
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 1, t, cnt = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == 1)
        {
            cnt++;
        }
        else
        {
            ans = max(ans, cnt);
            cnt = 1;
        }
    }
    ans = max(ans, cnt);
    cout << ans;

    return 0;
}