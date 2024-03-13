// problem: String Function Encoding
// id: 5987
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, c;
        string s, t;
        cin >> n >> c >> s;
        while (c--)
        {
            t = s.substr(n, s.length() - n);
            t += s;
            s = t;
        }
        cout << s << '\n';
    }

    return 0;
}