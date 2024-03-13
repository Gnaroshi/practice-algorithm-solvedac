// problem: Fan Death
// id: 15633
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            ans += i;
    cout << ans * 5 - 24;

    return 0;
}