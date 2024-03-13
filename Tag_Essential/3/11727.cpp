#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int nums[1002];
    fill(nums, nums + 1002, 0);

    nums[1] = 1;
    nums[2] = 3;
    for (int i = 3; i <= n; i++)
    {
        nums[i] = (nums[i - 1] + nums[i - 2] * 2) % 10007;
    }
    cout << nums[n] << '\n';
    return 0;
}