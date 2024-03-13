// problem: 比較 (Comparison)
// id: 24077
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, cnt = 0;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (auto i : b)
    {
        for (auto j : a)
        {
            if (i >= j)
                cnt++;
            else
                break;
        }
    }
    cout << cnt;

    return 0;
}