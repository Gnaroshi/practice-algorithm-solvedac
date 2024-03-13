#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    int nums[6];
    int temp_s_sum = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> nums[i];
        temp_s_sum += nums[i];
    }
    for (int i = 4; i < 6; i++)
    {
        cin >> nums[i];
    }
    int ans[2];
    ans[0] = 0;
    ans[1] = max(nums[4], nums[5]);

    for (int i = 0; i < 4; i++)
    {
        if (ans[0] < temp_s_sum - nums[i])
            ans[0] = temp_s_sum - nums[i];
    }
    cout << ans[0] + ans[1] << '\n';
    return 0;
}