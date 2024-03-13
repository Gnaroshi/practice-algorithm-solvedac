// problem: 도미노
// id: 2921
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        ans += i * (i + 1) + i * (i + 1) / 2;
    cout << ans;

    return 0;
}