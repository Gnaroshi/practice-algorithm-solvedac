// problem: 金平糖 (Konpeito)
// id: 22015
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int nums[3];
    for (int i = 0; i < 3; i++)
        cin >> nums[i];
    int mx = max(max(nums[0], nums[1]), nums[2]);
    int ans = 0;
    for (int i = 0; i < 3; i++)
        ans += mx - nums[i];
    cout << ans << '\n';

    return 0;
}