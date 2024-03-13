// problem: Number Pairs
// id: 15234
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, ans = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] >= k)
            break;
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] > k)
                break;
            if (v[i] + v[j] == k)
                ans++;
        }
    }
    cout << ans;

    return 0;
}