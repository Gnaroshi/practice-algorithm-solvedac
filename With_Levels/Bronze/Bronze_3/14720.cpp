// problem: 우유 축제
// id: 14720
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, chk = 0, ans = 0, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (chk == t)
        {
            chk++;
            chk %= 3;
            ans++;
        }
    }
    cout << ans;

    return 0;
}
