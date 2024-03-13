// problem: Konsonantkoll
// id: 20817
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, ans = "", svn = "bcdfghjklmnpqrstvwxz";
    getline(cin, s);
    char bef = s[0];
    int iter = s.length(), cnt = 1;
    ans += bef;
    for (int i = 1; i < iter; i++)
    {
        if (bef == s[i])
            cnt++;
        else
            cnt = 1;
        if (svn.find(s[i]) == string::npos)
            cnt = 1;
        if (cnt < 3)
            ans += s[i];
        bef = s[i];
    }
    cout << ans;

    return 0;
}