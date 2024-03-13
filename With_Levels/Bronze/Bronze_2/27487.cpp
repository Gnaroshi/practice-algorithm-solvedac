// problem: One and Two
// id: 27487
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
        int n, tcn = 0, cnt = 0;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
        {
            cin >> i;
            if (i == 2)
                tcn++;
        }
        if (tcn % 2)
            cout << -1 << '\n';
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] == 2)
                    cnt++;
                if (cnt * 2 == tcn)
                {
                    cout << i + 1 << '\n';
                    break;
                }
            }
        }
    }

    return 0;
}