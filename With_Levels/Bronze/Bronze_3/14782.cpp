// problem: Bedtime Reading, I
// id: 14782
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            ans += i;
    }
    cout << ans;

    return 0;
}
