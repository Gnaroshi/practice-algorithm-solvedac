// problem: Silnia
// id: 8558
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int ans = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
        ans %= 10;
    }
    cout << ans << '\n';

    return 0;
}