// problem: Broken Calculator
// id: 24830
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll ans = 1;
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll a, b;
        char c;
        cin >> a >> c >> b;
        if (c == '+')
            ans = a + b - ans;
        else if (c == '-')
            ans = (a - b) * ans;
        else if (c == '*')
            ans = a * a * b * b;
        else
        {
            if (a % 2 == 0)
                ans = a / 2;
            else
                ans = (a + 1) / 2;
        }
        cout << ans << '\n';
    }

    return 0;
}