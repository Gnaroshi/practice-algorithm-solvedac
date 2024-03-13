// problem: A번 - 찬반투표
// id:
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int nums[3] = {
        0,
    };
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        nums[t + 1]++;
    }
    if (nums[1] * 2 >= n)
        cout << "INVALID";
    else if (nums[0] == nums[2])
        cout << "REJECTED";
    else if (nums[0] > nums[2])
        cout << "REJECTED";
    else
        cout << "APPROVED";

    return 0;
}