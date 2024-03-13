// problem: Filling Shapes
// id: 30162
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n % 2)
        cout << 0;
    else
    {
        long long ans = 1;
        for (int i = 1; i <= n / 2; i++)
            ans *= 2;
        cout << ans;
    }

    return 0;
}