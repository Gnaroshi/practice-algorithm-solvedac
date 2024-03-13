// problem: Cameras
// id: 13064
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    vector<string> v;
    while (tc--)
    {
        string s;
        cin >> s;
        bool chk = true;
        for (int i = 0; i < 8; i++)
        {
            if (i == 4)
                continue;
            if (!isdigit(s[i]) || s[i] == '0')
            {
                chk = false;
                break;
            }
        }
        if (s[0] != s[1])
            chk = false;
        if (s[4] >= 'A' && s[4] <= 'Z' && chk)
            v.push_back(s);
    }
    int iter = v.size();
    for (int i = 0; i < iter; i++)
    {
        cout << v[i];
        if (i != iter - 1)
            cout << '\n';
    }

    return 0;
}