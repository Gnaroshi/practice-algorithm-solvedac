#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll nums[100001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> nums[i];
    }

    sort(nums, nums + n);

    int cnt_mx = -1;
    int cnt_temp = 0;
    int mx_loc = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == nums[i + 1])
            cnt_temp++;
        else
        {
            if (cnt_mx < cnt_temp)
            {
                cnt_mx = cnt_temp;
                cnt_temp = 0;
                mx_loc = i;
            }
        }
    }
    cout << nums[mx_loc] << '\n';

    return 0;
}