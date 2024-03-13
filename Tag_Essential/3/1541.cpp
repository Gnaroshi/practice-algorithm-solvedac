#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string temp;
    cin >> temp;

    int nums[50];
    fill(nums, nums + 50, 0);

    int pm[50];
    fill(pm, pm + 50, 0);

    int ans = 0;
    int temp_num = 0;
    int pm_cnt = 1;
    int nums_cnt = 0;
    bool isP = false;
    for (int i = 0; i < temp.length(); i++)
    {
        if (temp[i] == '-')
        {
            pm_cnt++;
            nums[nums_cnt] = temp_num;
            nums_cnt++;
            temp_num = 0;
        }
        else if (temp[i] == '+')
        {
            pm[pm_cnt] = 1;
            pm_cnt++;
            nums[nums_cnt] = temp_num;
            nums_cnt++;
            temp_num = 0;
        }
        else
        {
            temp_num *= 10;
            temp_num += (temp[i] - '0');
        }
    }
    // last num
    nums[nums_cnt] = temp_num;
    nums_cnt++;

    // plus: 1
    pm[0] = 1;
    temp_num = 0;
    ans += nums[0];
    bool isN = false;
    for (int i = 1; i < nums_cnt; i++)
    {
        if (pm[i] == 0)
        {
            if (!isN)
            {
                isN = true;
            }
            ans -= nums[i];
        }
        else
        {
            if (isN)
            {
                ans -= nums[i];
            }
            else
                ans += nums[i];
        }
    }

    cout << ans << '\n';

    return 0;
}