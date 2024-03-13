// problem: 막대기
// id: 17608
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx, ans = 0, tm = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    mx = *max_element(v.begin(), v.end());
    for (int i = n - 1; i >= 0; i--)
    {
        if (tm < v[i])
        {
            tm = v[i];
            ans++;
        }
        if (tm == mx)
            break;
    }
    cout << ans;

    return 0;
}