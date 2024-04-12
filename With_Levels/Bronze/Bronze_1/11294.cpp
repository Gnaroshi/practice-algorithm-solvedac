// problem: Numbers
// id: 11294
// tag:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, sa, sb;
    while (true)
    {
        getline(cin, s);
        if (s == "#")
            break;
        int a, b, c;
        getline(cin, sa);
        getline(cin, sb);
        a = stoi(sa);
        b = stoi(sb);
        cout << s << ", " << b << ", ";
        string ans = "";
        while (true)
        {
            c = b % a;
            if (c >= 10)
                ans += char(c - 10 + 'A');
            else
                ans += char('0' + c);
            b /= a;
            if (b == 0)
                break;
        }
        reverse(ans.begin(), ans.end());
        cout << ans << '\n';
    }

    return 0;
}