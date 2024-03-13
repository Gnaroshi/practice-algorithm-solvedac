// problem: 악마의 제안
// id: 23972
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll k, n;
    cin >> k >> n;
    if (n == 1)
        cout << -1;
    else
    {
        if (k % (n - 1) == 0 || n % (n - 1) == 0)
            cout << k * n / (n - 1);
        else
            cout << k * n / (n - 1) + 1;
    }

    return 0;
}