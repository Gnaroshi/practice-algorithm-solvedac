// problem: 열 순서
// id: 16495
// time taken:
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll ans = 0, t = 1;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    for (auto i = s.end() - 1; i >= s.begin(); i--)
    {
        ans += (*i - 'A' + 1) * t;
        t *= 26;
    }
    cout << ans;

    return 0;
}