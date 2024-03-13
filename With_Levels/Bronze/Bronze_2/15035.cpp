// problem: I Work All Day
// id: 15035
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, mn = 0x3f3f3f3f, ans = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    cin >> t;
    for (auto i : v)
    {
        if (mn > t % i)
        {
            mn = t % i;
            ans = i;
        }
    }
    cout << ans;

    return 0;
}