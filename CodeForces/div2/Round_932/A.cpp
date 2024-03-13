// problem: Entertainment in MAC
// id:
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
        int n;
        string s, t;
        cin >> n >> s;
        t = s;
        reverse(s.begin(), s.end());
        cout << min(t, s + t) << '\n';
    }

    return 0;
}