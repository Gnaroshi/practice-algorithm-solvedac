// problem: Record Breaker
// id: 23909
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        cout << "Case #" << tcc << ": ";
        int n, ans = 0, mx = -1;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        v.back() = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > mx)
            {
                mx = v[i];
                if (v[i] > v[i + 1])
                    ans++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}