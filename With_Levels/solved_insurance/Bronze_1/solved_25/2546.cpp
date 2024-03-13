// problem: 경제학과 정원영
// id: 2546
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m, ans = 0;
        cin >> n >> m;
        vector<double> v;
        double s1 = 0, s2 = 0, t;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            v.emplace_back(t);
            s1 += t;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> t;
            s2 += t;
        }
        s1 /= n;
        s2 /= m;
        for (int i = 0; i < n; i++)
            if (v[i] < s1 && v[i] > s2)
                ans++;
        cout << ans << '\n';
    }

    return 0;
}