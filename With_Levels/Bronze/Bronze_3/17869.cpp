// problem: Simple Collatz Sequence
// id: 17869
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    int ans = 0;
    cin >> n;
    while (true)
    {
        if (n == 1)
            break;
        if (n % 2 == 1)
            n++;
        else
            n /= 2;
        ans++;
    }
    cout << ans;

    return 0;
}