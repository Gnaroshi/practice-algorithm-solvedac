// problem: Integer Flipping
// id: 9313
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    while (true)
    {
        cin >> n;
        if (n == -1)
            break;

        string s = "", z = "";
        long long t = n, ans = 0, r = 1;
        while (t > 0)
        {
            s += char('0' + t % 2);
            t /= 2;
        }
        for (int i = s.length(); i < 32; i++)
            z += '0';
        s += z;
        reverse(s.begin(), s.end());
        for (auto i : s)
        {
            ans += (i - '0') * r;
            r *= 2;
        }
        cout << ans << '\n';
    }

    return 0;
}