// problem: 덧셈과 곱셈
// id: 14579
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    int ans = 1;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        ans *= i * (i + 1) / 2;
        ans %= 14579;
    }
    cout << ans;
    return 0;
}