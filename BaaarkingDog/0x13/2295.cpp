#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MX 1005

int n;
ll nums[MX];
// vector<ll> temp, two_binds;
vector<ll> temp;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums, nums + n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp.push_back(nums[i] + nums[j]);
        }
    }
    // int iter = n * n;
    // two_binds.push_back(temp[0]);
    // for (int i = 1; i < iter; i++)
    // {
    //     if (temp[i - 1] != temp[i])
    //         two_binds.push_back(temp[i]);
    // }

    sort(temp.begin(), temp.end());
    bool isFound = false;
    ll ans;
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (binary_search(temp.begin(), temp.end(), nums[i] - nums[j]))
            {
                isFound = true;
                ans = nums[i];
            }
            if (isFound)
                break;
        }
        if (isFound)
            break;
    }
    cout << ans << '\n';

    return 0;
}