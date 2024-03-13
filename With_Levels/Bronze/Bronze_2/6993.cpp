// problem: Shift Letters
// id: 6993
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
        string s;
        int n;
        cin >> s >> n;
        cout << "Shifting " << s << " by " << n << " positions gives us: ";
        cout << s.substr(s.length() - n, n) << s.substr(0, s.length() - n) << '\n';
    }

    return 0;
}