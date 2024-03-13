// problem: Weekend Lottery
// id: 5742
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, c, k, t;
    while (true)
    {
        cin >> n >> c >> k;
        if (n + c + k == 0)
            break;
        int *cnt = (int *)malloc(sizeof(int) * k + 1);
        fill(cnt, cnt + k + 1, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> t;
                cnt[t]++;
            }
        }
        int mn = 0x3f3f3f3f;
        for (int i = 1; i <= k; i++)
        {
            if (cnt[i] < mn)
                mn = cnt[i];
        }
        vector<int> ans;
        for (int i = 1; i <= k; i++)
        {
            if (cnt[i] == mn)
                ans.emplace_back(i);
        }
        int iter = ans.size();
        for (int i = 0; i < iter; i++)
        {
            cout << ans[i];
            if (i < iter - 1)
                cout << ' ';
            else
                cout << '\n';
        }
    }

    return 0;
}