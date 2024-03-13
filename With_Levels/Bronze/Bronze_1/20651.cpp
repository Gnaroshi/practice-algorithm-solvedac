// problem: Daisy Chains
// id: 20651
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, ans = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < n; i++)
    {
        int ts = 0, t;
        for (int j = i; j < n; j++)
        {
            ts += v[j];
            if (ts % (j - i + 1) == 0)
            {
                t = ts / (j - i + 1);
                for (int k = i; k <= j; k++)
                {
                    if (v[k] == t)
                    {
                        ans++;
                        break;
                    }
                }
            }
        }
    }
    cout << ans;

    return 0;
}