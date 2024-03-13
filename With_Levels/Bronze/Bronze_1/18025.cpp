// problem: Hot Hike
// id: 18025
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d = 0, t = 0x3f3f3f3f;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < n - 2; i++)
    {
        int tm = max(v[i], v[i + 2]);
        if (tm < t)
        {
            t = tm;
            d = i + 1;
        }
    }
    cout << d << ' ' << t;

    return 0;
}