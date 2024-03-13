// problem: Послание
// id: 28967
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, s;
    cin >> a >> s;
    int ans = 0, cur = 0, al = a.length();
    for (auto i : s)
    {
        if (a[cur] == i)
        {
            cur++;
            if (cur == al)
            {
                ans++;
                cur = 0;
            }
        }
    }
    cout << ans;

    return 0;
}