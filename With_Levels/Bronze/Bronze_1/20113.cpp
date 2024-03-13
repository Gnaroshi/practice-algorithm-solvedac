// problem: 긴급 회의
// id: 20113
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, mx;
    cin >> n;
    vector<int> v(n + 1);
    fill(v.begin(), v.end(), 0);
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t)
            v[t]++;
    }
    mx = *max_element(v.begin(), v.end());
    int cnt = 0, ans = 0;
    for (int i = 1; i <= n; i++)
        if (mx == v[i])
            cnt++, ans = i;
    if (cnt == 1)
        cout << ans;
    else
        cout << "skipped";

    return 0;
}