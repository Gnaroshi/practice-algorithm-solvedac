// problem: Свидание
// id: 29220
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n, s = 0, mn = 0x3f3f3f3f, t;
    cin >> k >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        s += t;
        mn = min(mn, t);
    }
    if (s - mn > k)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}