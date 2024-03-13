#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string temp;
    cin >> temp;

    int nums[3];
    fill(nums, nums + 3, 0);
    int loc = 0;
    for (int i = 0; i < temp.length(); i++)
    {
        if (temp[i] != '/')
        {
            nums[loc] *= 10;
            nums[loc] += temp[i] - '0';
        }
        else
            loc++;
    }

    if (nums[0] + nums[2] < nums[1] || nums[1] == 0)
        cout << "hasu\n";
    else
        cout << "gosu\n";

    return 0;
}