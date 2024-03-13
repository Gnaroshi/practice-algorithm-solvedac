// problem: 시그마
// id: 2355
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b;
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    cout << (2 * a + (b - a)) * (b - a + 1) / 2;
    return 0;
}