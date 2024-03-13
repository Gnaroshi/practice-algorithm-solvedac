// problem: 진수 변환기
// id: 14915
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n;
    cin >> m >> n;
    string ans = "";
    if (n == 10 || m == 0)
    {
        cout << m;
        return 0;
    }

    while (m > 0)
    {
        int t = m % n;
        if (t >= 10)
            ans += char('A' + t % 10);
        else
            ans += char('0' + t);
        m /= n;
    }
    reverse(ans.begin(), ans.end());
    cout << ans;

    return 0;
}