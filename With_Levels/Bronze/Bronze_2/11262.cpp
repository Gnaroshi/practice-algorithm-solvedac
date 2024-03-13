// problem: Minions’ Master
// id: 11262
// time taken:
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed;
    cout.precision(3);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, c = 0;
        double t, s = 0;
        cin >> n;
        vector<double> v;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            s += t;
            v.emplace_back(t);
        }
        for (auto i : v)
        {
            if (s < i * n)
                c++;
        }
        cout << s / n + 1e-10 << ' ' << double(c) / double(n) * 100.0 + 1e-10 << "%\n";
    }

    return 0;
}