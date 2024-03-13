#include <bits/stdc++.h>
using namespace std;

#define MX 50002

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    int sqrs[MX];
    int root_n = (int)sqrt(n);
    for (int i = 0; i <= root_n; i++)
    {
        sqrs[i] = i * i;
    }

    int ans[MX];
    fill(ans, ans + MX, 0);

    ans[0] = 0;
    ans[1] = 1;
    ans[2] = 2;
    ans[3] = 3;
    ans[4] = 1;

    for (int i = 5; i <= n; i++)
    {
        int cnt_min = 4;
        int cnt;
        int sqrt_i = (int)sqrt(i);
        int temp_si = sqrt_i;
        for (int j = temp_si; j > 0; j--)
        {
            cnt = 1 + ans[i - sqrs[j]];
            if (cnt < cnt_min)
                cnt_min = cnt;
        }
        ans[i] = cnt_min;
        // cout << "ans[" << i << "]: " << ans[i] << '\n';
    }

    cout << ans[n] << '\n';

    return 0;
}
