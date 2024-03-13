// problem: 세 막대
// id: 14215
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int nums[3];
    for (int i = 0; i < 3; i++)
        cin >> nums[i];
    sort(nums, nums + 3);
    cout << nums[0] + nums[1] + min(nums[2], nums[0] + nums[1] - 1);

    return 0;
}