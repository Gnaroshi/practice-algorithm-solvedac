// problem: 2진수 뒤집기
// id: 11179
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, ans = 0, m = 1;
    cin >> n;
    string s = "";
    while (n)
    {
        s += char('0' + n % 2);
        n /= 2;
    }
    reverse(s.begin(), s.end());
    for (auto i : s)
    {
        if (i == '1')
            ans += m;
        m *= 2;
    }
    cout << ans;

    return 0;
}