// problem: Income Inequality
// id: 16032
// time taken:
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (true)
    {
        cin >> n;
        if (!n)
            break;
        double s = 0, a;
        vector<double> v(n);
        for (auto &i : v)
        {
            cin >> i;
            s += i;
        }
        s /= n;
        int ans = 0;
        for (auto i : v)
        {
            if (i <= s)
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}