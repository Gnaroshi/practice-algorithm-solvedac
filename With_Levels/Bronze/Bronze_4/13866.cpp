#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int nums[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> nums[i];
    }
    cout << min(abs(nums[3] + nums[0] - nums[2] - nums[1]), abs(nums[0] - nums[1] + nums[2] - nums[3])) << '\n';

    return 0;
}