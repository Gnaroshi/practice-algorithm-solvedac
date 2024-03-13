#include <bits/stdc++.h>
using namespace std;

int n, m, l;
int arr[5001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> l;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    arr[0] = 0;
    arr[n + 1] = l;

    n++;
    sort(arr, arr + n);

    int lft, rght, cnt;
    lft = 1;
    rght = l;

    while (lft <= rght)
    {
        int mid = (lft + rght) / 2;
        cnt = 0;
        for (int i = 1; i <= n; i++)
            if (arr[i] > arr[i - 1] && mid != 0)
                cnt += (arr[i] - arr[i - 1] - 1) / mid;

        if (cnt > m)
            lft = mid + 1;
        else
            rght = mid - 1;
    }
    cout << lft << '\n';

    return 0;
}