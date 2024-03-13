// problem: A번 - ZOAC 6
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc, ans = 0;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        if (s.find("01") != string::npos)
            ans++;
        else if (s.find("OI") != string::npos)
            ans++;
    }
    cout << ans;

    return 0;
}