// problem: Dominos
// id: 15236
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += i * (i + 1);
        ans += i * (i + 1) / 2;
    }
    cout << ans;

    return 0;
}