#include <bits/stdc++.h>
using namespace std;

#define MX 1000001
int n;
int nums[MX];

void quick_sort(int st, int en)
{
    if (en <= st + 1)
        return;
    int pivot = nums[st];
    int l = st + 1;
    int r = en - 1;

    while (true)
    {
        while (l <= r && nums[l] <= pivot)
        {
            l++;
        }

        while (l <= r && nums[r] >= pivot)
        {
            r--;
        }

        if (l > r)
            break;
        swap(nums[l], nums[r]);
    }
    swap(nums[st], nums[r]);
    quick_sort(st, r);
    quick_sort(r + 1, en);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    quick_sort(0, n);

    for (int i = 0; i < n; i++)
        cout << nums[i] << '\n';
    return 0;
}