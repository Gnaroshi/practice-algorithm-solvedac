// problem: Palindromes
// id: 21945
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll ans, n, t;

ll p(ll t)
{
    string s = to_string(t);
    int iter = s.length(), ih = iter / 2;
    for (int i = 0; i < ih; i++)
    {
        if (s[i] != s[iter - i - 1])
            return 0;
    }
    return t;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    while (n--)
    {
        cin >> t;
        ans += p(t);
    }
    cout << ans;

    return 0;
}