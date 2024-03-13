// problem: ИЗРАЗ
// id: 24348
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, c;
    cin >> a >> b >> c;
    cout << max(max(a + b * c, a * b + c), a * c + b);

    return 0;
}