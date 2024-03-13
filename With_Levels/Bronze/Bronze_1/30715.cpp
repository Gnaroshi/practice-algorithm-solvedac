// problem: Олимпиада
// id: 30715
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k, x;
    cin >> n >> k >> x;
    cout << ((x + n - k - 1) / (n - k) * k + x);

    return 0;
}