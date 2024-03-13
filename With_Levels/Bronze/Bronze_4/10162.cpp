#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int nums[3];
    nums[0] = 300;
    nums[1] = 60;
    nums[2] = 10;

    int ans[3];
    fill(ans, ans + 3, 0);

    int n;
    cin >> n;
    bool isP = true;
    for (int i = 0; i < 3; i++)
    {
        while (true)
        {
            if (n >= nums[i])
            {
                ans[i]++;
                n -= nums[i];
            }
            else
                break;
        }
    }
    if (n != 0)
        cout << -1 << '\n';
    else
        cout << ans[0] << " " << ans[1] << " " << ans[2] << '\n';

    return 0;
}