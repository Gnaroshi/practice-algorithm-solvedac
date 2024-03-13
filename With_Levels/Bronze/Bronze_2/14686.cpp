// problem: Sum Game
// id: 14686
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, a = 0, b = 0, ans = 0;
    cin >> k;
    vector<int> sw(k);
    vector<int> sp(k);
    for (auto &i : sw)
        cin >> i;
    for (auto &i : sp)
        cin >> i;
    for (int i = 1; i <= k; i++)
    {
        a += sw[i - 1];
        b += sp[i - 1];
        if (a == b)
            ans = i;
    }
    cout << ans;

    return 0;
}