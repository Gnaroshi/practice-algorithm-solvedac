// problem: 뒤집기
// id: 15738
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, m, t;
    cin >> n >> k >> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        if (t >= k)
            k = t - k + 1;
        else if (n + t + 1 <= k)
            k = t - k + 1 + 2 * n;
    }
    cout << k;

    return 0;
}