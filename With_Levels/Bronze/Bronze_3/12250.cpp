// problem: New Lottery Game (Small)
// id: 12250
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        int a, b, k, ans = 0;
        cin >> a >> b >> k;
        for (int j = 0; j < a; j++)
        {
            for (int ii = 0; ii < b; ii++)
            {
                if ((j & ii) < k)
                    ans++;
            }
        }
        cout << "Case #" << i << ": " << ans << '\n';
    }

    return 0;
}