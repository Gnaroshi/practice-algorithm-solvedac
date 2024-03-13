#include <bits/stdc++.h>
using namespace std;

#define MX 1000002

int n;
int nums[MX];
vector<int> nums_v, nums_ans;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        nums_v.push_back(nums[i]);
    }

    sort(nums_v.begin(), nums_v.end());
    nums_ans.push_back(nums_v[0]);
    for (int i = 1; i < n; i++)
    {
        if (nums_v[i - 1] != nums_v[i])
            nums_ans.push_back(nums_v[i]);
    }

    for (int i = 0; i < n; i++)
        cout << lower_bound(nums_ans.begin(), nums_ans.end(), nums[i]) - nums_ans.begin() << ' ';

    return 0;
}