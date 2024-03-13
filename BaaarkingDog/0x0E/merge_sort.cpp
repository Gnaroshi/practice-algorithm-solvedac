// //배열 합치기

// #include <bits/stdc++.h>
// using namespace std;

// int n, m;
// int a[1000005], b[1000005];
// int ans[2000005];
// int main(void)
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cin >> n >> m;
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     for (int i = 0; i < m; i++)
//         cin >> b[i];

//     int aidx = 0;
//     int bidx = 0;
//     for (int i = 0; i < n + m; i++)
//     {
//         if (bidx == m)
//             ans[i] = a[aidx++];
//         else if (aidx == n)
//             ans[i] = b[bidx++];
//         else if (a[aidx] < b[bidx])
//             ans[i] = a[aidx++];
//         else
//             ans[i] = b[bidx++];
//     }

//     for (int i = 0; i < n + m; i++)
//     {
//         cout << ans[i] << ' ';
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define MX 1002

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