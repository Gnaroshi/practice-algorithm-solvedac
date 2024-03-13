// problem: 너의 이름은 몇 점이니?
// id: 15813
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, iter, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    iter = s.length();
    for (int i = 0; i < iter; i++)
    {
        ans += s[i] - 'A' + 1;
    }
    cout << ans;

    return 0;
}