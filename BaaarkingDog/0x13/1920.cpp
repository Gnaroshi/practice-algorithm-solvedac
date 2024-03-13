#include <bits/stdc++.h>
using namespace std;

#define MX 1000002
int nums[MX];
int n, m;

int bs(int tar)
{
    int s, e;
    s = 0;
    e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (nums[mid] < tar)
            s = mid + 1;
        else if (nums[mid] > tar)
            e = mid - 1;
        else
            return 1;
    }
    return 0;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    sort(nums, nums + n);

    cin >> m;
    while (m--)
    {
        int temp;
        cin >> temp;
        cout << bs(temp) << '\n';
    }
    return 0;
}