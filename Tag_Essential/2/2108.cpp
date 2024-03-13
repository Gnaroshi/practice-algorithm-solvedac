#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int nums[8001];
    fill(nums, nums + 8001, 0);

    int sum = 0;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        nums[temp + 4000]++;
        arr.push_back(temp);
        sum += temp;
    }

    sort(arr.begin(), arr.end());

    // arithmetic mean
    int am = round((float)sum / n);
    // median
    int median = arr[arr.size() / 2];
    // mode
    int mode;
    int mode_cnt = -500001;
    bool isSecond = false;
    for (int i = 0; i < 8001; i++)
    {
        if (nums[i] == 0)
            continue;
        if (nums[i] == mode_cnt)
        {
            if (isSecond)
            {
                mode = i - 4000;
                isSecond = false;
            }
        }
        if (nums[i] > mode_cnt)
        {
            mode_cnt = nums[i];
            mode = i - 4000;
            isSecond = true;
        }
    }

    // range
    int rn = arr.back() - arr.front();

    cout << am << '\n';
    cout << median << '\n';
    cout << mode << '\n';
    cout << rn << '\n';
    return 0;
}