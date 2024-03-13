#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;
    ll nums[100001];
    ll nums_sum[100001];
    fill(nums, nums + 100001, 0);
    fill(nums_sum, nums_sum + 100001, 0);
    cin >> nums[0];
    nums_sum[0] = nums[0];
    for (ll i = 1; i < n; i++)
    {
        cin >> nums[i];
        nums_sum[i] += (nums_sum[i - 1] + nums[i]);
    }
    while (m--)
    {
        ll n_left, n_right;
        cin >> n_left >> n_right;
        if (n_left != 1)
            cout << nums_sum[n_right - 1] - nums_sum[n_left - 2] << '\n';
        else
            cout << nums_sum[n_right - 1] << '\n';
    }

    return 0;
}
