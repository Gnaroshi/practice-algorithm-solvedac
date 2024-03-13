// problem: Balanced String
// id: 17520
// time taken:
#include <bits/stdc++.h>
using namespace std;

const int M = 16769023;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 2;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        ans *= (i % 2) + 1;
        ans %= M;
    }
    cout << ans << '\n';

    return 0;
}