#include <bits/stdc++.h>
using namespace std;

#define MX 1000001

int n;
int nums[MX];
int tmp[MX];

void merge(int st, int en)
{
    int mid = (st + en) / 2;
    int st_idx = st;
    int en_idx = mid;
    for (int i = st; i < en; i++)
    {
        if (en_idx == en)
            tmp[i] = nums[st_idx++];
        else if (st_idx == mid)
            tmp[i] = nums[en_idx++];
        else if (nums[st_idx] <= nums[en_idx])
            tmp[i] = nums[st_idx++];
        else
            tmp[i] = nums[en_idx++];
    }
    for (int i = st; i < en; i++)
    {
        nums[i] = tmp[i];
    }
}

void merge_sort(int st, int en)
{
    if (en == st + 1)
        return;
    int mid = (st + en) / 2;
    // cout << "st: " << st << " en: " << en << " mid: " << mid << '\n';

    merge_sort(st, mid);
    merge_sort(mid, en);
    merge(st, en);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    merge_sort(0, n);

    for (int i = 0; i < n; i++)
        cout << nums[i] << '\n';

    return 0;
}