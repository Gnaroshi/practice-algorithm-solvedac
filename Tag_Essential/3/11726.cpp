#include <bits/stdc++.h>
using namespace std;

#define pn 10007

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int nums[1002];
    fill(nums, nums + 1002, 0);

    int n;
    cin >> n;
    nums[1] = 1;
    nums[2] = 2;

    for (int i = 3; i <= n; i++)
    {
        nums[i] = (nums[i - 1] + nums[i - 2]) % pn;
    }
    cout << nums[n] << '\n';
    return 0;
}