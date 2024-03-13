// problem: Sascha
// id: 2391
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
        string sa, t, ans;
        cin >> sa;
        int iter = sa.length(), dif = 0x3f3f3f3f, w;
        cin >> w;
        for (int i = 0; i < w; i++)
        {
            cin >> t;
            int td = 0;
            for (int j = 0; j < iter; j++)
            {
                if (t[j] != sa[j])
                    td++;
            }
            if (td < dif)
            {
                dif = td;
                ans = t;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}