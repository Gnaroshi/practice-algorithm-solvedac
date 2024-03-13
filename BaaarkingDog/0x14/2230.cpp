#include <bits/stdc++.h>
using namespace std;

int n, m;
int nums[100005];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    sort(nums, nums + n);

    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int loc = lower_bound(nums, nums + n, nums[i] + m) - nums;
        if (loc != n)
            ans = min(ans, nums[loc] - nums[i]);
    }

    cout << ans << '\n';
    return 0;
}