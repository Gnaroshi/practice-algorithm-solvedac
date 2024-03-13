#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll nums[100009];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(nums, nums + n);

    int cnt_mx = -1;
    int cnt_temp = 1;
    int mx_loc = 0;

    for (int i = 0; i < n - 1; i++)
    {
        // cout << "sorted nums: " << nums[i] << '\n';
        // cout << "cnts: " << cnt_temp << '\n';
        if (nums[i] == nums[i + 1])
            cnt_temp++;
        else
        {
            if (cnt_mx < cnt_temp)
            {
                cnt_mx = cnt_temp;
                mx_loc = i;
            }
            cnt_temp = 1;
        }
    }
    if (cnt_temp > cnt_mx)
    {
        mx_loc = n - 1;
    }

    cout << nums[mx_loc] << '\n';

    return 0;
}