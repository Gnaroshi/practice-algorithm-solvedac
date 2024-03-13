// problem: 코딩 바이오리듬
// id: 23292
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string b, c, ans = "";
    int n, mx = -1;
    cin >> b >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        int t = 1, m = 0;
        for (int j = 0; j < 4; j++)
            m += ((b[j] - '0') - (c[j] - '0')) * ((b[j] - '0') - (c[j] - '0'));
        t *= m;
        m = 0;
        for (int j = 4; j < 6; j++)
            m += ((b[j] - '0') - (c[j] - '0')) * ((b[j] - '0') - (c[j] - '0'));
        t *= m;
        m = 0;
        for (int j = 6; j < 8; j++)
            m += ((b[j] - '0') - (c[j] - '0')) * ((b[j] - '0') - (c[j] - '0'));
        t *= m;

        if (mx < t)
        {
            mx = t;
            ans = c;
        }
        else if (mx == t)
        {
            if (ans > c)
                ans = c;
        }
    }
    cout << ans;

    return 0;
}