// problem: 팩토리얼 2
// id: 27433
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long ans = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    cout << ans << '\n';

    return 0;
}