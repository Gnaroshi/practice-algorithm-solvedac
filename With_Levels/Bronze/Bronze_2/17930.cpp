// problem: Hanging Out on the Terrace
// id: 17930
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, p, ans = 0, cur = 0, x;
    cin >> l >> p;
    string s;
    for (int i = 0; i < p; i++)
    {
        cin >> s >> x;
        if (s[0] == 'e')
        {
            if (cur + x > l)
                ans++;
            else
                cur += x;
        }
        else
            cur -= x;
    }
    cout << ans;

    return 0;
}