// problem: 체스판 조각
// id: 3004
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 1;
    cin >> n;
    int t = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            ans += t;
            t++;
        }
        else
            ans += t;
    }
    cout << ans;

    return 0;
}