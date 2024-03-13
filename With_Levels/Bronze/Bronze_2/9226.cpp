// problem: 도깨비말
// id: 9226
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    while (true)
    {
        cin >> s;
        if (s == "#")
            break;
        string ans = "";
        int iter = s.length();
        int loc = 0;
        for (int i = 0; i < iter; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                loc = i;
                break;
            }
            ans.push_back(s[i]);
            loc++;
        }
        cout << s.substr(loc, iter - loc) << ans << "ay\n";
    }

    return 0;
}