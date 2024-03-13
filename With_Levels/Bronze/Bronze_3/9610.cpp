// problem: 사분면
// id: 9610
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans[5] = {0};
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0 || b == 0)
            ans[4]++;
        else if (b > 0)
        {
            if (a > 0)
                ans[0]++;
            else
                ans[1]++;
        }
        else
        {
            if (a > 0)
                ans[3]++;
            else
                ans[2]++;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "Q" << i + 1 << ": " << ans[i] << '\n';
    }
    cout << "AXIS: " << ans[4];

    return 0;
}