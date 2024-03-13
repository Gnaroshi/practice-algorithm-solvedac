// problem: Finding Your Coach
// id: 16088
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
        int l, r, n, m;
        cin >> l >> r >> n >> m;
        bool il = false, ir = false;
        if (n == m)
            cout << "G\n";
        else
        {
            int d = abs(n - m);

            if (d <= l)
                il = true;
            if (d <= r)
                ir = true;
            if (il && ir)
                cout << "E\n";
            else if (il)
                cout << "L\n";
            else
                cout << "R\n";
        }
    }

    return 0;
}