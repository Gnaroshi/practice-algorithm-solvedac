#include <bits/stdc++.h>
using namespace std;

int n;
int nums[100005];

bool cmp(int a, int b)
{
    return a > b;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> nums[i];
    }
    sort(nums + 1, nums + n + 1, cmp);

    int mx = -1;
    int temp_mx = 0;
    for (int i = 1; i <= n; i++)
    {
        temp_mx = nums[i] * i;
        if (mx < temp_mx)
        {
            mx = temp_mx;
        }
    }
    cout << mx << '\n';

    return 0;
}