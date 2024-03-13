// problem: 퐁당퐁당 1
// id: 17944
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;
    bool sw = true;
    int ans = 0;
    n *= 2;
    for (int i = 0; i < t; i++)
    {
        if (sw)
            ans++;
        else
            ans--;
        if (sw && ans >= n || !sw && ans <= 1)
            sw = !sw;
    }
    cout<<ans;
    return 0;
}