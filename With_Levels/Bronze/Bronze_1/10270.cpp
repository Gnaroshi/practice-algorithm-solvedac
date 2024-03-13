// problem: Algebraic Teamwork
// id: 10270
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MD = 1000000007;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << "0\n";
            continue;
        }
        ll ans = 1;
        for (ll i = n; i >= 1; i--)
        {
            ans *= i;
            ans %= MD;
        }
        cout << (ans - 1) % MD << '\n';
    }

    return 0;
}
// 자기자신으로 안돌아와야하므로 순열과 같음