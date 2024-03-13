#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int nums[1001];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums, nums + n);

    int ans = 0;
    int wtime = 0;
    for (int i = 0; i < n; i++)
    {
        ans += nums[i] + wtime;
        wtime += nums[i];
    }
    cout << ans << '\n';
    return 0;
}
