// problem: 계산기 프로그램
// id: 5613
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long ans = 0, t;
    char c;
    cin >> t;
    ans = t;
    while (true)
    {
        cin >> c;
        if (c == '=')
        {
            cout << ans;
            break;
        }
        cin >> t;
        if (c == '+')
            ans += t;
        else if (c == '-')
            ans -= t;
        else if (c == '*')
            ans *= t;
        else if (c == '/')
            ans /= t;
    }

    return 0;
}