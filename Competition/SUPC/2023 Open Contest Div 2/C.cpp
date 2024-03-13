// problem: C번 - 문자열 만들기 1
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 1, l = 2;
    string s, t = "", ans = "";
    cin >> n >> s;
    int iter = n / 2, pos = n - 1, tp = 0;
    if (s[pos] == 'S')
        ans += "UN", t += "US";
    else
        ans += "SN", t += "SU";
    pos--;
    while (pos >= 0)
    {
        // cout << "tpos: " << tp << " pos: " << pos << '\n';
        // cout << "t: " << t << '\n';
        // cout << "s: " << s << '\n';
        // cout << "--------------\n";
        if (tp < 0)
        {
            if (s[pos] == 'U')
            {
                ans += "S";
                t.insert(0, "SU");
            }
            else
            {
                ans += "U";
                t.insert(0, "US");
            }
            tp = 0;
            ans += 'N';
            cnt += 2;
        }
        else if (t[tp] == s[pos])
        {
            tp--;
            ans += 'N';
            cnt++;
        }
        else
        {
            if (s[pos] == 'U')
            {
                ans += "SN";
                t.insert(tp + 1, "SU");
            }
            else
            {
                ans += "UN";
                t.insert(tp + 1, "US");
            }
            cnt += 2;
            tp++;
        }
        pos--;
    }
    cout << cnt << '\n'
         << ans;
    // cout << '\n'
    //      << t;

    return 0;
}