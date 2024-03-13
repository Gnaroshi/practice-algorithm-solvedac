// problem: 다각형
// id: 11896
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, b, ans = 0;
    cin >> a >> b;
    a = max(a + a % 2, 4LL);
    b -= b % 2;
    cout << max(0LL, ((a + b) * (b / 2 - a / 2 + 1)) / 2);

    return 0;
}