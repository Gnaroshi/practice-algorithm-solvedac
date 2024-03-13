// problem: Bubble-bubble Sort
// id: 25981
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 0, n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    while (true)
    {
        bool chk = true;
        for (int i = 1; i < n; i++)
        {
            if (v[i - 1] > v[i])
            {
                chk = false;
                break;
            }
        }
        if (chk)
            break;
        for (int i = 0; i <= n - k; i++)
            sort(v.begin() + i, v.begin() + i + k);
        cnt++;
    }
    cout << cnt << "\n";

    return 0;
}
