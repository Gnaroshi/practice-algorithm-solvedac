// problem: Eligibility
// id: 10410
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
        string s, bd, cd;
        int cs;
        cin >> s >> cd >> bd >> cs;
        cout << s;
        if (stoi(cd.substr(0, 4)) >= 2010 || stoi(bd.substr(0, 4)) >= 1991)
            cout << " eligible\n";
        else if (cs < 41)
            cout << " coach petitions\n";
        else
            cout << " ineligible\n";
    }

    return 0;
}