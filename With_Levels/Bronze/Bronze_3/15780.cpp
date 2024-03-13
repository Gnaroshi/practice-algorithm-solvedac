// problem: 멀티탭 충분하니?
// id: 15780
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, ans = 0, t;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> t;
        if (t % 2 == 1)
            t++;
        ans += t / 2;
    }
    if (ans >= n)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}