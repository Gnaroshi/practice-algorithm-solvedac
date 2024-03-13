#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    int nums[11];
    fill(nums, nums + 11, 0);

    nums[1] = 1;
    nums[2] = 2;
    nums[3] = 4;
    nums[4] = 7;
    for (int i = 5; i < 12; i++)
    {
        nums[i] = nums[i - 1] + nums[i - 2] + nums[i - 3];
    }

    while (tc--)
    {
        int n;
        cin >> n;
        cout << nums[n] << '\n';
    }

    return 0;
}