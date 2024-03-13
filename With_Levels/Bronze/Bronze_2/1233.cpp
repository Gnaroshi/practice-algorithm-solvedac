#include <bits/stdc++.h>
using namespace std;

int ans[1000];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> s[i];
    }
    for (int i = 1; i <= s[0]; i++)
    {
        for (int j = 1; j <= s[1]; j++)
        {
            for (int k = 1; k <= s[2]; k++)
            {
                ans[i + j + k]++;
            }
        }
    }
    int ans_loc = 0;
    int mx = -1;
    for (int i = 1; i < 1000; i++)
    {
        if (mx < ans[i])
        {
            mx = ans[i];
            ans_loc = i;
        }
    }

    cout << ans_loc << '\n';

    return 0;
}