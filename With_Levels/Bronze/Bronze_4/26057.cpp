// problem: Большой удой
// id: 26057
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll l, t;
    cin >> l >> t;
    cout << abs(l - 2 * t);

    return 0;
}