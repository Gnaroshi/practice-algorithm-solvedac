// problem: Password Problem (Small)
// id: 12394
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    cout << fixed;
    cout.precision(7);
    for (int tcc = 1; tcc <= tc; tcc++)
    {
        int a, b;
        cin >> a >> b;
        double ans = b + 2, tp, ta, tb;
        vector<double> p(a), pr;
        for (auto &i : p)
            cin >> i;
        pr.push_back(1);
        for (int i = 0; i < a; i++)
            pr.push_back(pr.back() * p[i]);
        for (int i = 0; i <= a; i++)
        {
            tp = pr[a - i];
            ta = 2 * i + b - a + 1;
            tb = 2 * i + 2 * b - a + 2;
            ans = min(ans, tp * ta + (1 - tp) * tb);
        }
        cout << "Case #" << tcc << ": " << ans << '\n';
    }

    return 0;
}