// problem: Briefcases Full of Money
// id: 25849
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[6];
    int b[6] = {1, 5, 10, 20, 50, 100};
    int t, mx = -1, mxl = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> t;
        if (mx <= b[i] * t)
        {
            mxl = i;
            mx = b[i] * t;
        }
    }
    cout << b[mxl];

    return 0;
}