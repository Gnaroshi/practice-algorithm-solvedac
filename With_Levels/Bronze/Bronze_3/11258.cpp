// problem: Thai Lottery Checking
// id: 11258
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s[6];
    int l[6];
    for (int i = 0; i < 6; i++)
        cin >> s[i] >> l[i];
    while (true)
    {
        string n;
        cin >> n;
        if (n == "-1")
            break;
        int ans = 0;
        if (!n.compare(s[0]))
            ans += l[0];
        if (!n.substr(0, 3).compare(s[1]))
            ans += l[1];
        if (!n.substr(0, 3).compare(s[2]))
            ans += l[2];
        if (!n.substr(3, 3).compare(s[3]))
            ans += l[3];
        if (!n.substr(3, 3).compare(s[4]))
            ans += l[4];
        if (!n.substr(4, 2).compare(s[5]))
            ans += l[5];
        cout << ans << '\n';
    }

    return 0;
}